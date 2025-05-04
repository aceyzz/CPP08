<img src="git_utils/banner.png" width= 100%>

<br>

---

<br>

<details>
<summary>FRENCH VERSION</summary>

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

</details>

<br>

---

<br>

<details>
<summary>ENGLISH VERSION</summary>

### Exercise 00 - "Easy find"

<details>
	<summary>Show/Hide</summary>

#### Objective:

The goal is to create a template function `easyfind` that takes a container type `T` of integers and an integer as parameters. This function searches for the first occurrence of the integer in the container. If the occurrence is not found, an exception is thrown or an error value is returned.

#### My Implementation:

[Link here](https://github.com/aceyzz/CPP08/tree/master/ex00)

- **Function `easyfind`**: Implements the search in any container of integers (such as `std::vector` or `std::list`) using the `std::find` algorithm from the STL. If the search fails, it throws a `NotFoundException`.

- **Exception Handling**: Defines a custom exception `NotFoundException` to signal the absence of the searched element in the container.

#### Tests:

- **Test with `std::vector`**: Demonstrates `easyfind` on a `std::vector` of integers, showcasing the function's ability to find or not find the specified element.

- **Test with `std::list`**: Uses `easyfind` on a `std::list` of integers, demonstrating the function's flexibility with different container types.

These tests validate the correct functionality of `easyfind`, capable of efficiently handling searches in various integer containers and properly signaling when an element is not found.

</details>

<br>

---

<br>

### Exercise 01 - "Span"

<details>
	<summary>Show/Hide</summary>

#### Objective:
The goal is to create a class `Span` capable of storing up to `N` integers, where `N` is an unsigned integer passed to the constructor. This class must handle adding numbers via the `addNumber` method and calculate the smallest (`shortestSpan`) and largest span (`longestSpan`) between its elements. Any attempt to add beyond the maximum capacity raises an exception.

#### My Implementation:

[Link here](https://github.com/aceyzz/CPP08/tree/master/ex01)

- **Capacity Management**: The `Span` class uses a `std::set` to store numbers uniquely and in sorted order, with a maximum capacity defined at construction.

- **Adding Elements**: The `addNumber` method allows adding an element to the `Span`. An overload of this method accepts a range of iterators to add multiple elements simultaneously, improving the class's flexibility and efficiency.

- **Span Calculations**: The `shortestSpan` and `longestSpan` methods calculate the smallest and largest spans between the elements of the `Span`, respectively. If the `Span` contains fewer than two elements, an exception is raised to indicate that no span can be calculated.

- **Exception Handling**: Two types of custom exceptions are defined to handle specific error cases: `MaxCapacityException` for attempts to add beyond the maximum capacity, and `InvalidSpanException` for attempts to calculate spans in an insufficiently filled `Span`.

#### Tests:

The tests demonstrate the use of `Span` with series of numbers, including the case of a large number of elements (more than 10,000), to validate the proper functioning of the addition and span calculation methods. These tests highlight the robustness and efficiency of the `Span` class in managing sets of integers and calculating spans while ensuring proper error handling through custom exceptions.

</details>

<br>

---

<br>

### Exercise 02 - "Mutant Abomination"

<details>
	<summary>Show/Hide</summary>

#### Objective:
The objective of this exercise is to address the lack of iterability in the `std::stack` container by making it iterable. To achieve this, you will implement a `MutantStack` class that inherits from `std::stack` and adds iterators to it.

#### My Implementation:

[Link here](https://github.com/aceyzz/CPP08/tree/master/ex02)

- **Class `MutantStack`**: Inherits from `std::stack` and offers all its member functionalities. Additionally, `MutantStack` introduces the ability to iterate over its elements using typical STL container iterators.

- **Iterators**: The class provides `iterator` and `const_iterator` types, enabling iteration over the `MutantStack` both for reading and writing. These iterators are obtained via the `begin`, `end`, `cbegin`, and `cend` members.

#### Tests:

- **Using `MutantStack`**: The class is tested by adding elements and then iterating over them using the provided iterators. This test demonstrates adding, removing, and accessing elements in the stack.

- **Comparison with `std::list` and `std::vector`**: To ensure the behavior of `MutantStack` aligns with other iterable containers, similar tests are performed using `std::list` and `std::vector`. These tests confirm that `MutantStack` behaves as expected, allowing iteration over its elements.

This implementation enhances the `std::stack` container by making it iterable while preserving its original functionalities. The conducted tests show that `MutantStack` can be used interchangeably with other iterable STL containers, validating its utility and flexibility.

</details>

<br>

</details>