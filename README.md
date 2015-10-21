En esta práctica controlarán un motor a pasos, pero incorporarán comunicación por puerto serial y un sensor de temperatura.
Los requisitos funcionales del sistema a entregar son:
1. Controlar un motor a pasos. Las acciones que realice el motor estarán dictadas por comandos que se reciban por el puerto serial:
Configurar la velocidad del motor. El comando de velocidad será: “RPS:nnn.n” donde las n representan las revoluciones por segundo (se debe poder usar hasta 1 decimal)
Configurar la dirección de giro del motor. El comando será: “DIR:CW” o “DIR:CCW”
Encender y apagar el motor para operación contínua. El comando será: “MOTOR:On” para encender “Motor:Off” para apagar
Mover el motor g grados  en sentido horario o antihorario. El comando será "STEP-CW:ggg" donde ggg es un ángulo entre 0 y 999 grados. Este comando será ignorado si el motor está operando en modo contínuo, PERO, sí debe respetar la velocidad configurada para hacer el movimiento del motor.
2. Monitorear la temperatura del motor con un sensor de temperatura
Se deberá reporta la temperatura del motor cada 5 segundos por el puerto serial (enviar el dato a la computadora).
Si se llega a un límite de temperatura establecido, se deberá apagar el motor y enviar el mensaje "Overtemperature detected" a la computadora por puerto serial.
Permitir configurar el límite de temperatura por puerto serial. El comando será: "TEMP-LIMIT:ttt.t" donde ttt.t es la temperatura límite en grados centígrados (se debe poder usar hasta 1 decimal) 
3. Operación del puerto serial.
El puerto serial deberá poder operar desde 9600 hasta 115200 bps, configurable en tiempo de compilación.
Comnados incorrectos deberán ser ignorados.
Todos los comandos sí reconocidos deberán enviar una respuesta de "Done".
Todos los comandos teminarán con el delimitador ´\n´
Requisitos de la implementación:
El driver de puerto serial debe ser no bloqueante, y no debe afectarse la velocidad máxima del motor.
La implementación debe incluir:
Driver de puerto serial (HAL)
Driver de gestión de mensajes (HIL)
Driver de sensado de temperatura (HIL)
Recomiendo el uso de TeraTerm como hyperterminal. Lo pueden descargar en : http://logmett.com/index.php?/download/tera-term-482-freeware.html
En esta práctica se calificará a detalle el driver del puerto serial, las modificaciones al driver del stepper y el driver de temperatura:
Funcionamiento correcto y entrega a tiempo.
Arquitectura del software.
Código limpio y bien documentado (teoría de operación y comentarios en el código).
Código correcto (óptimo para resolver el problema en cuestión).
Reporte. El reporte debe ser técnico, tener redacción y ortografía de nivel universitario, y no incluir paja. Voy a bajar puntos a los reportes llenos de paja y/o con pobre redacción y ortografía. El reporte debe incluir:
Diagrama de conexiones de puerto serial.
Foto del circuito armado (debe estar armado limpio).
Arquitectura de software. Los drivers del puerto serial debe ser explicado a detalle.
Bitácora del puerto serial donde se vean todos los comandos usados.
Conclusiones (observaciones del funcionamiento, del software, posibles mejoras, etc.)
