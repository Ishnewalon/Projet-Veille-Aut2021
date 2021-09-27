CREATE TABLE IF NOT EXISTS souper (
	id 		SERIAL PRIMARY KEY,
	nom 		TEXT,
	description	TEXT,
	prix		NUMERIC,
	isRabais	bool,
	isDispo		bool
);

CREATE TABLE IF NOT EXISTS dejeuner (
	id 		SERIAL PRIMARY KEY,
	nom 		TEXT,
	description	TEXT,
	prix		NUMERIC,
	isRabais	bool,
	isDispo		bool
);

CREATE TABLE IF NOT EXISTS diner (
	id 		SERIAL PRIMARY KEY,
	nom 		TEXT,
	description	TEXT,
	prix		NUMERIC,
	isRabais	bool,
	isDispo		bool
);

CREATE TABLE IF NOT EXISTS breuvage (
	id 		SERIAL PRIMARY KEY,
	nom 		TEXT,
	description	TEXT,
	prix		NUMERIC,
	isRabais	bool,
	isDispo		bool
);

CREATE TABLE IF NOT EXISTS dessert (
	id 		SERIAL PRIMARY KEY,
	nom 		TEXT,
	description	TEXT,
	prix		NUMERIC,
	isRabais	bool,
	isDispo		bool
);

CREATE TABLE IF NOT EXISTS enfant (
	id 		SERIAL PRIMARY KEY,
	nom 		TEXT,
	description	TEXT,
	prix		NUMERIC,
	isRabais	bool,
	isDispo		bool
);

CREATE TABLE IF NOT EXISTS combo (
	id 		SERIAL PRIMARY KEY,
	nom 		TEXT,
	description	TEXT,
	prix		NUMERIC,
	isRabais	bool,
	isDispo		bool
);

CREATE TABLE IF NOT EXISTS utilisateurs (
	id 		SERIAL PRIMARY KEY,
	nom		TEXT,
	prenom		TEXT,
	numemp		TEXT,
	mdp		TEXT
);













