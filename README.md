# ***sqlManager*** - `DBI_Act4_24-2`

Para una explicación detallada de cada código, puedes consultar la siguiente lista de reproducción en el siguiente enlace:

---

En este repositorio se encuentra el código del proyecto ***sqlManager***, diseñado con el propósito de implementar las operaciones CRUDL:

- **Create**: Crear registros.
- **Read**: Leer registros.
- **Update**: Actualizar registros.
- **Delete**: Eliminar registros.
- **List**: Listar registros.

***sqlManager*** está hecho para trabajar con bases de datos **PostgreSQL**, permitiendo conectarse, crear tablas, insertar registros, etc.

Esta tabla muestra los lenguajes y herramientas utilizadas en el proyecto:

| Lenguaje   | Interfaz | Herramienta                                   |
|------------|----------|-----------------------------------------------|
| C++        | CLI      | [libpq++](https://github.com/jtv/libpqxx)     |
| Python     | GUI      |                                               |
| JavaScript | GUI      |                                               |

---

## ***Cpsql***

*Edición de sqlManager hecha en C++.*

Este programa, completamente escrito en C++, permite conectarse a bases de datos **PostgreSQL** utilizando la librería [libpq++](https://github.com/jtv/libpqxx).

El código está completamente comentado para entender lo que está pasando.

### Requisitos para compilar

- **GCC 14.2.0**
  - Desarrollado originalmente en esta versión, aunque es posible que funcione con versiones anteriores o con otros compiladores.
  - [Enlace de descarga](https://winlibs.com/)

---

### Curiosidades sobre el nombre ***Cpsql***

El nombre ***Cpsql*** es en opinión un nombre perfecto:

- **Cps** hace referencia a las múltiples "p" en el nombre **Cpp** (C++).
- **psql** es el nombre del cliente cli de **PostgreSQL** (psql.exe).
- **sql** hace referencia a **SQL**.
