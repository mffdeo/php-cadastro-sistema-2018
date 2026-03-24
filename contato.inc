<form method = "POST" action="processa_dados_contato.php">
	<div align="center">
		<h2>Contato</h2>
		<fieldset>
		<div>
			<p><b>Nome:</b><br>
			<input type=text name="nome" size="45"></p>
		</div>
		<div>
			<p><b>Email:</b><br>
			<input type=text name="email" size="45"></p><br>
		</div>
		<div>
			<p><b>Assunto:</b><br>
			<input type=text name="assunto" size="45"></p><br>
		</div>
		<div>
			<p><b>Mensagem:</b><br>
			<textarea name="conteudo" rows="10" cols="60"></textarea></p><br>
		</div>

		<div>
			<p><input type="submit" value="Enviar Email"> <input type="reset" value="Limpar Formulário"></p>
		</div>

		 </fieldset>
	</div>
</form>