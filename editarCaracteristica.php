<!DOCTYPE html>
<?php

session_start();
include_once ("conexao.php");

$id = filter_input(INPUT_GET, 'id', FILTER_SANITIZE_NUMBER_INT);
$select = "SELECT * FROM caracteristica WHERE id = '$id'";
$resultCaracteristica = mysqli_query($conexao, $select);
$linha = mysqli_fetch_assoc($resultCaracteristica)

?>

<html lang="pt-br">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Editar</title>
</head>

<body>
    <?php
    if (isset($_SESSION['msg'])) {
        echo $_SESSION['msg'];
        unset($_SESSION['msg']);
    }
    ?>

    <div class="box">
        <form action="saveEdit.php" method="POST">

            <p>ID</p>
            <input type="number" name="txtID" value="<?php echo $linha['id']; ?>"><br><br>
            <p>Nome</p>
            <input type="text" name="txtNome" value="<?php echo $linha['nome']; ?>"><br><br>
            <p>Descrição: </p>
            <input type="text" name="txtDescricao" value="<?php echo $linha['descricao']; ?>"><br><br>
            <input type="submit" name="update" value="Salvar Alterações">
        </form>
</body>

</html>
