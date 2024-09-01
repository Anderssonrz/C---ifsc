<!-- <?php
// include ("conexao.php");
// // include ("banco-produto.php");

// $cod = $_GET['id'];
// $produto = buscaCaracteristica($conexao, $id);
?> -->

<!DOCTYPE html>
<html>

<head>
<meta charset="utf-8">
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
<meta name="viewport" content="width=device-width, initial-scale=1">
</head>

<style>
    body {
    background-color: #F8FBEF;
    }
</style>

<body>


<title>Alterar Produto</title>
<div class="jumbotron jumbotron-fluid">
<div class="container">
<h1 class="display-4">Alteração de Aparelhos</h1>
</div>
</div>

<div class="row">
<div style="margin: 0 auto; width: 600px">
<form action="altera-produto.php">
<div class="pull-right">
</div>
<div class="pull-left">  
<a href="./index.php" class="btn btn-danger">Voltar</a>
</div>
<div class="form-group">
<input type="hidden" name="id" value="<?=$produto['id']?>">
<input class="form-control" name="nome" value="<?=$produto['nome']?>" type="text" placeholder="Nome Aparelho *">
</div>
<div class="form-group">
<input class="form-control" name="quantidade" value="<?=$produto['quantidade']?>" type="number" placeholder="Digite a Quantidade *">
</div> 
<div class="form-group">
<input class="form-control" name="valor" type="number" value="<?=$produto['valor']?>" placeholder="Digite o Valor *">
</div> 
<div class="form-group">
<input class="form-control" name="modelo" value="<?=$produto['modelo']?>" type="text" placeholder="Digite o Modelo *">
<td><button class="btn btn-primary" type="submit">Alterar</button></td>
</div> 
</form>
</div>
</div>
</section>
</div> 
</div> 
</body>
</html>