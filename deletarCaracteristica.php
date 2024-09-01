<?php

include_once ("conexao.php");
session_start();
 // MONITORAR O BOTAO DE APAGAR
 if (!isset($_GET['btnApagarId'])) {

    $id = $_GET['id'];

    $sqlSelect = "SELECT * FROM caracteristica WHERE id = '$id'";

    $result = $conexao->query($sqlSelect);

    if ($result->num_rows > 0) {
        $sqlDelete = "DELETE FROM aluno WHERE matricula = '$matricula'";
        $resultDelete = $conexao->query($sqlDelete);
    }
}
 header('Location: index.php');

?>
 