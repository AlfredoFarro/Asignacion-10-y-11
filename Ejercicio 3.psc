Algoritmo Ejercicio3
	Escribir "Escriba el peso de la persona en kilogramos: "
	Leer peso
	Escribir "Escriba la altura de la persona en metros: "
	Leer altura
	IMC<-peso/(altura*altura)
	Escribir "Su IMC es de: " IMC
	
	Si IMC<15 Entonces
		Escribir "Su diagnóstico es de criterio de ingreso en hospital"
	sino 
		si IMC>=15&&IMC<=20 Entonces
			Escribir "Su diagnóstico es de bajo peso"
		SiNo
			Si IMC>20&&IMC<=30 Entonces
				Escribir "Su diagnóstico es de peso normal (saludable)"
			sino 
				si IMC>30&&IMC<=40 Entonces
					Escribir "Su diagnóstico es de sobrepeso (obesidad de grado I)"
				SiNo
					si IMC>40 entonces
						Escribir "Su diagnóstico es de sobrepeso crónico (obesidad de grado II)"
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
