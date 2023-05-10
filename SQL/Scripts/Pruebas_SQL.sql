-- Seleccion de la Bases de Datos
USE bikestore;
-- Creacion de la tabla
CREATE TABLE `customers_copia2` (
  `customer_id` int NOT NULL AUTO_INCREMENT,
  `first_name` varchar(255) NOT NULL,
  `last_name` varchar(255) NOT NULL,
  `phone` varchar(25) DEFAULT NULL,
  `email` varchar(255) NOT NULL,  
  PRIMARY KEY (`customer_id`)
) ENGINE=InnoDB AUTO_INCREMENT=1446 DEFAULT CHARSET=utf8mb3;
-- Inserciòn de la Tabla "customers_copia2" basandose en la tabla "customers"
INSERT INTO customers_copia2 SELECT customer_id, first_name, last_name, phone, email FROM customers;
-- Borrando la tabla customers_copia2 completa * Advertencia esto no debe practicarse
DELETE FROM customers_copia2;
-- Antes de actualizar seleccionamos la cuenta No. 1, esto nos permite confirmar que el criterio de busqueda es el correcto
SELECT * FROM customers_copia2 WHERE customer_id = 1;
-- Luego de verificar el criterio de busqueda aplico la actualizacion
UPDATE customers_copia2 SET phone = '555-555555' WHERE customer_id = 1;
UPDATE customers_copia2 SET email = 'daguilae@yahoo.com' WHERE customer_id = 1;
-- Consulta el registro actualizado usando como criterio de busqueda el correo
SELECT * FROM customers_copia2 WHERE email = 'daguilae@yahoo.com';
UPDATE customers_copia2 SET email = '	debra.burks@yahoo.com	' WHERE customer_id = 1;
SELECT * FROM customers_copia2 WHERE email = 'debra.burks@yahoo.com';
-- Ingresando un registro con llave primaria duplicada
INSERT INTO customers_copia2 VALUES (1, 'Luis', 'Suarez', '502 5555555', 'lsuarez@yahoo.com');
INSERT INTO customers_copia2 VALUES (0, 'Luis', 'Suarez', '502 5555555', 'lsuarez@yahoo.com');
SELECT * FROM customers_copia2;
SELECT * FROM customers_copia2 WHERE customer_id = 0;
SELECT * FROM customers_copia2 WHERE email = 'lsuarez@yahoo.com';
INSERT INTO customers_copia2 VALUES (0, 'Luis', 'Suarez', '', 'lsuarez@yahoo.com');
INSERT INTO customers_copia2 VALUES (0, 'Luis', 'Suarez', '', NULL);
SELECT * FROM customers_copia2 WHERE last_name = 'Suarez';

