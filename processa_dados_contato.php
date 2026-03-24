<?php 
$nome =htmlspecialchars($_POST["nome"]);/*htmlespecialchars() tira as tags automaticamente de conteudo escrito em html no formulario*/
$email =htmlspecialchars($_POST["email"]);
$assunto =htmlspecialchars($_POST["assunto"]);
$conteudo =htmlspecialchars($_POST["conteudo"]);

$mensagem = "Mensagem enviada por um visitante:\n\n";
$mensagem .= "Nome: $nome\n";
$mensagem .= "E-mail: $email\n";
$mensagem .= "Conteudo: $conteudo";

//mail("mffdeo@gmail.com",$assunto,$mensagem);
var_dump(mail("mffdeo@gmail.com",$assunto,$mensagem));
echo "Obrigado por enviar sua mensagem!";

?>