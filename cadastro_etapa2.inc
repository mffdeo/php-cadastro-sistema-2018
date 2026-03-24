<h3 align="center"><strong>Cadastramento - Etapa 2 de 3</strong></h3>
<form method="POST" action ="cadastro_etapa3.php">
	<fieldset>
		<div align="center">
		
			<input type="hidden" name="nome" 			value = "<?php echo $_POST['nome']; 		?>">
			<input type="hidden" name="email" 			value = "<?php echo $_POST['email'];		?>">
			<input type="hidden" name="datanascimento" 	value = "<?php echo $_POST['datanascimento'];?>">
			<input type="hidden" name="sexo" 			value = "<?php echo $_POST['sexo']; 		?>">
			<input type="hidden" name="profissao" 		value = "<?php echo $_POST['profissao'];	?>">
			
			<div>
				<p><b>Telefone:</b><br>  
					<input type="text" name="telefone" size="20">
				</p>
			</div>
			  
			<div>
				<p><b>Endereco:</b><br>  
					<input type="text" name="endereco" size="20">
				</p>
			</div>
			 
			<div>
				<p><b>Cidade:</b><br> 
					<input type="text" name="cidade" size="20">
				</p>
				<p><b>Estado:</b><br> 
					<input type="text" name="estado" size="20">
				</p>
			</div>
			 
			<div>
				<p><b>CEP:</b><br>  
					<input type="text" name="cep" size="20">
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
