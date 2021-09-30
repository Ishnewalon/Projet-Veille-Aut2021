INSERT INTO souper (nom, description, prix, israbais, isdispo) VALUES 
	('Bolognaise', 'Pates avec une sauce bolognaise', 12.99, false, true);

INSERT INTO souper (nom, description, prix, israbais, isdispo) VALUES 
	('Cotes levees', 'Nos fameuse cotes levees sont fait avec une sauce BBQ', 28.99, false, true);

INSERT INTO souper (nom, description, prix, israbais, isdispo) VALUES 
	('Steak', 'Boeuf AAA marine 28 jours', 25.99, false, true);

INSERT INTO souper (nom, description, prix, israbais, isdispo) VALUES 
	('Pizza', 'Au fromage. Autres garnitures disponible', 10.99, false, true);

INSERT INTO souper (nom, description, prix, israbais, isdispo) VALUES 
	('Saumon fume', 'Saumon fume sur une planche de cedre', 23.99, false, true);



INSERT INTO dejeuner (nom, description, prix, israbais, isdispo) VALUES 
	('Crepes', '2 crepes natures avec saucisses ou bacon', 13.99, false, true);

INSERT INTO dejeuner (nom, description, prix, israbais, isdispo) VALUES 
	('Crepe choco-fruits', '1 crepe avec nutella et des petits fruits', 17.99, false, true);

INSERT INTO dejeuner (nom, description, prix, israbais, isdispo) VALUES 
	('Pain dore', '2 pains dore avec saucisses ou bacon', 14.99, false, true);

INSERT INTO dejeuner (nom, description, prix, israbais, isdispo) VALUES 
	('Yogourt', 'Yogourt nature avec du granola et des petits fruits', 15.99, false, true);

INSERT INTO dejeuner (nom, description, prix, israbais, isdispo) VALUES 
	('Oeufs Bacon', '2 oeufs et du bacon. Servi avec du pain blanc ou brun', 10.99, false, true);



INSERT INTO diner (nom, description, prix, israbais, isdispo) VALUES
	('Macaroni au fromage', 'Un macaroni fait au 3 fromages: cheddar, mozarella et Monterey Jack', 12.99, false, true);

INSERT INTO diner (nom, description, prix, israbais, isdispo) VALUES
	('Hot Dog', '2 hot dogs steamer avec frites. Peut etre changer pour poutine', 8.99, false, true);

INSERT INTO diner (nom, description, prix, israbais, isdispo) VALUES
	('Hamburger', 'Un hamburger avec frites. Peut etre changer pour une poutine', 10.99, false, true);

INSERT INTO diner (nom, description, prix, israbais, isdispo) VALUES
	('BLT', 'BLT viande blanche ou fonce. Servit avec frites et salade de choux', 12.99, false, true);

INSERT INTO diner (nom, description, prix, israbais, isdispo) VALUES
	('Wrap au poulet', 'Wrap au poulet grille ou croustillant. Servi avec des frites', 13.99, false, true);



INSERT INTO breuvage (nom, description, prix, israbais, isdispo) VALUES
	('7Up', 'Regulier et Diete',  2.99, false, true);

INSERT INTO breuvage (nom, description, prix, israbais, isdispo) VALUES
	('Coca Cola', 'Regulier, Diete et Zero',  2.99, false, true);

INSERT INTO breuvage (nom, description, prix, israbais, isdispo) VALUES
	('Cafe', '',  1.99, false, true);

INSERT INTO breuvage (nom, description, prix, israbais, isdispo) VALUES
	('Limonade', 'En canette ou en bouteille',  3.99, false, true);

INSERT INTO breuvage (nom, description, prix, israbais, isdispo) VALUES
	('Jus', 'Pomme, raisin ou orange',  2.99, false, true);




INSERT INTO dessert (nom, description, prix, israbais, isdispo) VALUES
	('Tiramisu', 'Gateau froid au cafe', 5.99, false, true);

INSERT INTO dessert (nom, description, prix, israbais, isdispo) VALUES
	('Gateau au chocolat', 'Gateau au chocolat', 5.99, false, true);

INSERT INTO dessert (nom, description, prix, israbais, isdispo) VALUES
	('Mille-Feuille', 'Gateau froid au cafe', 6.99, false, true);

INSERT INTO dessert (nom, description, prix, israbais, isdispo) VALUES
	('Brownies', 'Brownies moeulleux avec centre fondant. Peut contenir des noix', 7.99, false, true);

INSERT INTO dessert (nom, description, prix, israbais, isdispo) VALUES
	('Creme galcee', 'Chocolat, vanille ou fraise', 3.99, false, true);



INSERT INTO enfant (nom, description, prix, israbais, isdispo) VALUES
	('Croquette de poulet', '4 croquettes en forme de dinosaurs. Servi avec frites', 7.99, false, true);

INSERT INTO enfant (nom, description, prix, israbais, isdispo) VALUES
	('Spaghetti Bolognaise', 'Spaghetti servi avec une sauce a la viande', 5.99, false, true);

INSERT INTO enfant (nom, description, prix, israbais, isdispo) VALUES
	('Grilled cheese', 'Fait avec du fromage suisse', 3.99, false, true);

INSERT INTO enfant (nom, description, prix, israbais, isdispo) VALUES
	('Pizza', 'Petite pizza au fromage', 6.99, false, true);

INSERT INTO enfant (nom, description, prix, israbais, isdispo) VALUES
	('Hot dog', '1 ho dog servi avec frites', 4.99, false, true);



INSERT INTO combo (nom, description, prix, israbais, isdispo) VALUES
	('Hot dog Combo', 'Inclu 2 hot dog, une boisson gazeuse et un dessert', 15.99, false, true);

INSERT INTO combo (nom, description, prix, israbais, isdispo) VALUES
	('Steak Combo', 'Inclu steak, une boisson gazeuse et un dessert', 29.99, false, true);

INSERT INTO combo (nom, description, prix, israbais, isdispo) VALUES
	('Wrap Combo', 'Inclu un wrap au poulet, une boisson gazeuse et un dessert', 16.99, false, true);

INSERT INTO combo (nom, description, prix, israbais, isdispo) VALUES
	('BLT Combo', 'Inclu BLT, une boisson gazeuse et un dessert', 14.99, false, true);

INSERT INTO combo (nom, description, prix, israbais, isdispo) VALUES
	('Saumon  fume Combo', 'Inclu saumon fume, une boisson gazeuse et un dessert', 27.99, false, true);



INSERT INTO utilisateurs (nom, prenom, numemp, mdp) VALUES 
	('Lukeworth', 'Bella', 'S38495', 'lukbel');

INSERT INTO utilisateurs (nom, prenom, numemp, mdp) VALUES 
	('Paris', 'Maxime', 'S98365', 'parmax');

INSERT INTO utilisateurs (nom, prenom, numemp, mdp) VALUES 
	('Stilton', 'Geronimo', 'S32489', 'gersti');

INSERT INTO utilisateurs (nom, prenom, numemp, mdp) VALUES 
	('Riviera', 'Jeanne', 'S21394', 'rivjea');

INSERT INTO utilisateurs (nom, prenom, numemp, mdp) VALUES 
	('Cougar', 'John', 'S54389', 'coujoh');

