#Holaa este también es un codigo 100% creado por mi gerson :))))
#Esta vez, estaba practicando condicionales :))
#Nivel: 1°-Junior
nombre = str(input("Bienvenido, Ingresa tu Nombre: "))
apellido =str(input("Ingresa tu Apellido: "))

if apellido==int:
    print("""
          
ERROR: ¡Debes proporcionar un texto, no un numero!""")
    

if nombre==int:
    print("""
          
ERROR: ¡Debes proporcionar un texto, no un numero!""")

if nombre == apellido:
    print("""
          
          
ERROR: ¡ingresa Nombre y un apellido Validos.!""")

else:    
    print("""
          
          
Bienvendo!,""" , nombre , apellido , """es agradable verte de nuevo :). """)