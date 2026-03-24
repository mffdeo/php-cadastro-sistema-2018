<h3 align="center"><strong>Cadastramento - Etapa 3 de 3</strong></h3>
<form method="POST" action ="cadastra.php"><!--cadastra.php responsavel por cadastra no banco de dados-->
	<fieldset>
		<div align="center">
		
			<input type="hidden" name="nome" 			value = "<?php echo $_POST['nome']			;?>">
			<input type="hidden" name="email" 			value = "<?php echo $_POST['email']			;?>">
			<input type="hidden" name="datanascimento" 	value = "<?php echo $_POST['datanascimento'];?>">
			<input type="hidden" name="sexo" 			value = "<?php echo $_POST['sexo']			;?>">
			<input type="hidden" name="profissao" 		value = "<?php echo $_POST['profissao']		;?>">	
			<input type="hidden" name="telefone" 		value = "<?php echo $_POST['telefone']		;?>">
			<input type="hidden" name="endereco" 		value = "<?php echo $_POST['endereco']		;?>">
			<input type="hidden" name="cidade" 			value = "<?php echo $_POST['cidade']		;?>">
			<input type="hidden" name="estado" 			value = "<?php echo $_POST['estado']		;?>">
			<input type="hidden" name="cep" 			value = "<?php echo $_POST['cep']			;?>">
			
			<div>
				<p><b>Username:</b><br> 
					<input type="text" name="username" size="20">
				</p>
			</div>
			  
			<div>
				<p><b>Senha:</b><br>  
					<input type="text" name="senha" size="20">
				</p>
			</div>
			 
			<div>
				<p><b>Confirme sua senha:</b><br>  
					<input type="text" name="confirma_senha" size="20">
				</p>
			</div>
			 		  
			<div>
				<p>
					<input type="submit"value="Prosseguir &gt;&gt;" name="prosseguir">
				</p>
			</div>
		</div>
	</fieldset>
</form>