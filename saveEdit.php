<!DOCTYPE html>

<?php
session_start();
include_once("conexao.php");

$id = filter_input(INPUT_POST, 'id', FILTER_SANITIZE_NUMBER_INT);
$nome = filter_input(INPUT_POST, 'nome', FILTER_SANITIZE_STRING);
$idade = filter_input(INPUT_POST, 'descricao', FILTER_SANITIZE_STRING);

$update = "UPDATE caracteristica SET  nome='$nome', idade='$descricao' 
    WHERE id = '$id'";
$result = mysqli_query($conexao, $update);

if (mysqli_affected_rows($conexao)) {
    $_SESSION['msg'] = "<p style='color:green;'>Usuário editado com sucesso!</p>";
    header("Location: pesquisaAluno.php");
} else {
    $_SESSION['msg'] = "<p style='color:red;'>Usuário não foi editado com sucesso.</p>";
    
}
header("Location: pesquisar.php?");
?>
