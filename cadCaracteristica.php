<?php
require("conexao.php");

if (isset($_POST['btnSalvar'])) {
    $caracteristica['nome'] = $_POST['txtNome'];
    $caracteristica['descricao'] = $_POST['txtDescricao'];
    cadCaracteristica($conexao, $caracteristica);
}

?>
<!doctype html>
<html lang="pt-br">

<head>
    <title>Cadastrar Características</title>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>

</head>

<body>

    <p>Descrição</p>

    <h1>Cadastro de Características</h1>

    <form action="" method="POST">
        <p>Nome: </p>
        <input type="text" id="txtNome" name="txtNome" size="60"></input>
        <p>Descrição: </p>
        <input type="text" id="txtDescricao" name="txtDescricao" size="60"></input>
        <p><button type="submit" name="btnSalvar" class="btn btn-primary">Salvar</button></p>
    </form>

</body>

</html>


<?php
function cadCaracteristica($conexao, $caracteristoca)
{
    $nome = $caracteristoca['nome'];
    $descricao = $caracteristoca['descricao'];

    $sql = "INSERT INTO caracteristica (nome, descricao) VALUES ('$nome', '$descricao')";


    if (mysqli_query($conexao, $sql) == TRUE) {
        echo "Registro inserido com sucesso!";
        header("Location: index.php");
    } else {
        echo "Erro ao inserir registro. " . mysqli_connect_errno();
    }
}
?>