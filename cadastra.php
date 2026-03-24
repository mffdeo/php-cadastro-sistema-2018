<?php
include "conecta_mysql.inc";

// Pegando dados
$nome = $_POST['nome'] ?? '';
$email = $_POST['email'] ?? '';
$data_br = $_POST['datanascimento'] ?? '';

// Converter de DD/MM/YYYY → YYYY-MM-DD
$data_obj = DateTime::createFromFormat('d/m/Y', $data_br);

if ($data_obj) {
    $datanascimento = $data_obj->format('Y-m-d');
} else {
    die("Data inválida!");
}
$sexo = $_POST['sexo'] ?? '';
$profissao = $_POST['profissao'] ?? '';
$telefone = $_POST['telefone'] ?? '';
$endereco = $_POST['endereco'] ?? '';
$cidade = $_POST['cidade'] ?? '';
$estado = $_POST['estado'] ?? '';
$cep = $_POST['cep'] ?? '';
$usuario = $_POST['username'] ?? '';
$senha = $_POST['senha'] ?? '';
$confirma = $_POST['confirma_senha'] ?? '';

// 🔐 validação
if ($senha !== $confirma) {
    die("As senhas não coincidem!");
}

// 🔐 hash da senha (melhor prática)
$senha_hash = password_hash($senha, PASSWORD_DEFAULT);

// 🗄️ SQL (agora usando sua tabela REAL)
$sql = "INSERT INTO cadastro 
(nome, email, data_nascimento, sexo, profissao, telefone, endereco, cidade, estado, cep, usuario, senha)
VALUES 
('$nome', '$email', '$datanascimento', '$sexo', '$profissao', '$telefone', '$endereco', '$cidade', '$estado', '$cep', '$usuario', '$senha_hash')";

// executar
if (mysqli_query($conn, $sql)) {
    echo "<h2>Cadastro realizado com sucesso!</h2>";
} else {
    echo "Erro: " . mysqli_error($conn);
}

mysqli_close($conn);
?>