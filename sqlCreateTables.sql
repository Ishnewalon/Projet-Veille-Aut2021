CREATE TABLE IF NOT EXIST souper (
	id 		SERIAL PRIMARY KEY,
	nom 		TEXT,
	description	TEXT,
	prix		NUMERIC,
	isRabais	bool,
	isDispo		bool
);

CREATE TABLE IF NOT EXIST dejeuner (
	id 		SERIAL PRIMARY KEY,
	nom 		TEXT,
	description	TEXT,
	prix		NUMERIC,
	isRabais	bool,
	isDispo		bool
);

CREATE TABLE IF NOT EXIST diner (
	id 		SERIAL PRIMARY KEY,
	nom 		TEXT,
	description	TEXT,
	prix		NUMERIC,
	isRabais	bool,
	isDispo		bool
);

CREATE TABLE IF NOT EXIST breuvage (
	id 		SERIAL PRIMARY KEY,
	nom 		TEXT,
	description	TEXT,
	prix		NUMERIC,
	isRabais	bool,
	isDispo		bool
);

CREATE TABLE IF NOT EXIST dessert (
	id 		SERIAL PRIMARY KEY,
	nom 		TEXT,
	description	TEXT,
	prix		NUMERIC,
	isRabais	bool,
	isDispo		bool
);

CREATE TABLE IF NOT EXIST enfant (
	id 		SERIAL PRIMARY KEY,
	nom 		TEXT,
	description	TEXT,
	prix		NUMERIC,
	isRabais	bool,
	isDispo		bool
);

CREATE TABLE IF NOT EXIST combo (
	id 		SERIAL PRIMARY KEY,
	nom 		TEXT,
	description	TEXT,
	prix		NUMERIC,
	isRabais	bool,
	isDispo		bool
);

CREATE TABLE IF NOT EXIST utilisateurs (
	id 		SERIAL PRIMARY KEY,
	nom		TEXT,
	prenom		TEXT,
	numemp		TEXT,
	mdp		TEXT
);












