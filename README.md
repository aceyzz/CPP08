<img src="utils/CPP08.png" width= 100%>

<br>

---

### Exercice 00 - "Easy find"

<details>
  <summary>Afficher/Masquer</summary>

#### Objectif :

Le but est de créer une fonction modèle `easyfind` qui prend un type de conteneur `T` d'entiers et un entier comme paramètres. Cette fonction recherche la première occurrence de l'entier dans le conteneur. Si l'occurrence n'est pas trouvée, une exception est lancée ou une valeur d'erreur est retournée.

#### Mon Implémentation :

[Lien ici](https://github.com/aceyzz/CPP08/tree/master/ex00)

- **Fonction `easyfind`** : Implémente la recherche dans n'importe quel conteneur d'entiers (comme `std::vector` ou `std::list`) en utilisant l'algorithme `std::find` de la STL. En cas d'échec de la recherche, elle lance une exception `NotFoundException`.

- **Gestion des Exceptions** : Définition d'une exception personnalisée `NotFoundException` pour signaler l'absence de l'élément recherché dans le conteneur.

#### Tests :

- **Test avec `std::vector`** : Démo de `easyfind` sur un `std::vector` d'entiers, illustrant la capacité de la fonction à trouver ou non l'élément spécifié.

- **Test avec `std::list`** : Utilisation de `easyfind` sur un `std::list` d'entiers, démontrant la flexibilité de la fonction avec différents types de conteneurs.

Ces tests valident le fonctionnement correct de `easyfind`, capable de gérer efficacement la recherche dans divers conteneurs d'entiers et de signaler adéquatement quand un élément n'est pas trouvé.

</details>

<br>

---

<br>


### Exercice 01 - "Span"

<details>
  <summary>Afficher/Masquer</summary>

#### Objectif :
Le but est de créer une classe `Span` capable de stocker jusqu'à `N` entiers, où `N` est un entier non signé passé au constructeur. Cette classe doit gérer l'ajout de nombres via la méthode `addNumber`, et calculer le plus petit (`shortestSpan`) et le plus grand écart (`longestSpan`) entre ses éléments. Toute tentative d'ajout au-delà de la capacité maximale lève une exception.

#### Mon Implémentation :

[Lien ici](https://github.com/aceyzz/CPP08/tree/master/ex01)

- **Gestion de la capacité** : La classe `Span` utilise un `std::set` pour stocker les nombres de manière unique et triée, avec une capacité maximale définie à la construction.

- **Ajout d'éléments** : La méthode `addNumber` permet d'ajouter un élément au `Span`. Une surcharge de cette méthode accepte une plage d'itérateurs pour ajouter plusieurs éléments simultanément, améliorant ainsi la flexibilité et l'efficacité de la classe.

- **Calcul des écarts** : Les méthodes `shortestSpan` et `longestSpan` calculent respectivement le plus petit et le plus grand écart entre les éléments du `Span`. Si le `Span` contient moins de deux éléments, une exception est levée pour indiquer qu'aucun écart ne peut être calculé.

- **Gestion des exceptions** : Deux types d'exceptions personnalisées sont définis pour gérer les cas d'erreur spécifiques : `MaxCapacityException` pour les tentatives d'ajout au-delà de la capacité maximale, et `InvalidSpanException` pour les tentatives de calcul d'écart dans un `Span` insuffisamment rempli.

#### Tests :

Les tests démontrent l'utilisation de `Span` avec des séries de nombres, y compris le cas d'un grand nombre d'éléments (plus de 10 000), pour valider le bon fonctionnement des méthodes d'ajout et de calcul des écarts. Ces tests mettent en évidence la robustesse et l'efficacité de la classe `Span` dans la gestion des ensembles d'entiers et le calcul des écarts, tout en garantissant une gestion d'erreur adéquate grâce à des exceptions personnalisées.

</details>

<br>

---

<br>

### Exercice 02 - "Abomination mutante"

<details>
  <summary>Afficher/Masquer</summary>

#### Objectif :
L'objectif de cet exercice est de remédier à l'absence d'itérabilité du conteneur `std::stack` en le rendant itérable. Pour ce faire, vous allez implémenter une classe `MutantStack` qui hérite de `std::stack` et lui ajoute des itérateurs.

#### Mon Implémentation :

[Lien ici](https://github.com/aceyzz/CPP08/tree/master/ex02)

- **Classe `MutantStack`** : Hérite de `std::stack` et offre toutes ses fonctionnalités membres. De plus, `MutantStack` introduit la possibilité d'itérer sur ses éléments grâce à des itérateurs typiques des conteneurs de la STL.

- **Itérateurs** : La classe propose des types `iterator` et `const_iterator`, rendant possible l'itération sur le `MutantStack` aussi bien en lecture qu'en écriture. Ces itérateurs sont obtenus via les membres `begin`, `end`, `cbegin` et `cend`.

#### Tests :

- **Utilisation de `MutantStack`** : La classe est testée en ajoutant des éléments, puis en itérant sur ceux-ci à l'aide des itérateurs fournis. Ce test démontre l'ajout, le retrait et l'accès aux éléments de la pile.

- **Comparaison avec `std::list` et `std::vector`** : Pour s'assurer de la conformité du comportement de `MutantStack` avec d'autres conteneurs itérables, des tests similaires sont effectués en utilisant `std::list` et `std::vector`. Ces tests confirment que `MutantStack` se comporte comme attendu en permettant l'itération sur ses éléments.

Cette implémentation enrichit le conteneur `std::stack` en le rendant itérable, tout en préservant ses fonctionnalités originales. Les tests effectués montrent que `MutantStack` peut être utilisé de manière interchangeable avec d'autres conteneurs itérables de la STL, validant ainsi son utilité et sa flexibilité.

</details>

<br>

---

<br>
