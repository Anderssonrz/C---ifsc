<!doctype html>
<?php
session_start();
require_once("conexao.php");

// print_r($session);
if (isset($_POST['btnPesquisar'])) {
    $pesq = $_POST['numId'];
    $sql = "SELECT * FROM `caracteristica` WHERE `id` = $pesq";
} else {
    $sql = "SELECT * FROM `caracteristica`";
}


?>


<html lang="pt-br">

<head>
    <title>Title</title>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>

</head>

<body>
    <form action="" method="POST" class="form-inline">
        <div class="form-group mx-sm-3 mb-2">
            <input type="number" name="numId" class="form-control" id="numMatricula" placeholder="Matrícula">
        </div>
        <button type="submit" name="btnPesquisar" class="btn btn-primary mb-2">Pesquisar</button>
    </form> <br>
    <form action="cadCaracteristica.php" method="POST">
        <button type="submit" name="btnCadastrar" class="btn btn-primary mb-2">Novo Cadastro</button>
    </form><br>

    <table class="table table-striped">
        <tr>
            <th scope="col">NOME</th>
            <th scope="col">DESCRIÇÃO</th>
            <th scope="col">EDITAR</th>
            <th scope="col">APAGAR</th>
        </tr>

        <?php carregarCaracteristicas($conexao); ?>


    </table>
    

</body>

</html>

<?php
function carregarCaracteristicas($conexao)
{


    $sql = "SELECT * FROM caracteristica";
    $res = mysqli_query($conexao, $sql);

    while ($linha = mysqli_fetch_assoc($res)) {
        echo "<tr>";
        echo "<td>" . $linha['nome'] . "</td>";
        echo "<td>" . $linha['descricao'] . "</td>";
        echo "<td> <a class='btn btn-sm btn-primary' href='editarCaracteristica.php?matricula=$linha[id]' id='editar' title='Editar'>
        <svg xmlns='http://www.w3.org/2000/svg' width='16' height='16' fill='currentColor' class='bi bi-pencil' viewBox='0 0 16 16'>
            <path d='M12.146.146a.5.5 0 0 1 .708 0l3 3a.5.5 0 0 1 0 .708l-10 10a.5.5 0 0 1-.168.11l-5 2a.5.5 0 0 1-.65-.65l2-5a.5.5 0 0 1 .11-.168l10-10zM11.207 2.5 13.5 4.793 14.793 3.5 12.5 1.207 11.207 2.5zm1.586 3L10.5 3.207 4 9.707V10h.5a.5.5 0 0 1 .5.5v.5h.5a.5.5 0 0 1 .5.5v.5h.293l6.5-6.5zm-9.761 5.175-.106.106-1.528 3.821 3.821-1.528.106-.106A.5.5 0 0 1 5 12.5V12h-.5a.5.5 0 0 1-.5-.5V11h-.5a.5.5 0 0 1-.468-.325z'/>
        </svg>
        </a>
        </td>";
        echo "<td> <a class='btn btn-sm btn-danger' href='deletarCaracteristica.php?matricula=$linha[id]' id='deletar' title='Delete'>
        <svg xmlns='http://www.w3.org/2000/svg' width='16' height='16' fill='currentColor' class='bi bi-trash-fill' viewBox='0 0 16 16'>
        <path d='M2.5 1a1 1 0 0 0-1 1v1a1 1 0 0 0 1 1H3v9a2 2 0 0 0 2 2h6a2 2 0 0 0 2-2V4h.5a1 1 0 0 0 1-1V2a1 1 0 0 0-1-1H10a1 1 0 0 0-1-1H7a1 1 0 0 0-1 1H2.5zm3 4a.5.5 0 0 1 .5.5v7a.5.5 0 0 1-1 0v-7a.5.5 0 0 1 .5-.5zM8 5a.5.5 0 0 1 .5.5v7a.5.5 0 0 1-1 0v-7A.5.5 0 0 1 8 5zm3 .5v7a.5.5 0 0 1-1 0v-7a.5.5 0 0 1 1 0z'/>
        </svg>
        </a>
        </td>";
        echo "</tr>";
    }
}
?>