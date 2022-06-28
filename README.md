Met de software in het ADC-UART2 project is het mogelijk om pin PA3 als ADC pin te gebruiken en uit te lezen. Deze pin is op het developmentboard op pin A0 in CN9 te vinden.
Het programma zal de ADC waarde via UART naar een verbonden computer sturen, wanneer een waarde van 500 of meer uitgelezen wordt. Deze ADC waarde komt overeen met vrijwel 80dB uit de microfoon. De instellingen hiervoor zijn standaard 38400 baud, 8 data bit, geen parity bit en 1 stop bit zijn.


Met de software in het USB-DATA project is het mogelijk om data via de USB-OTG poort van de STM32 te lezen en te schrijven van en naar een USB-stick. Om de dataoverdracht te zien is het mogelijk om een terminal verbinding te maken. De instellingen hiervoor zijn standaard 38400 baud, 8 data bit, geen parity bit en 1 stop bit zijn.
Bij het huidige prototype van de node werkt de +5V voeding niet. Om deze reden moet er een male-female jumper kabel geplaatst worden. Deze moet van de op CN8 aangegeven +5V pin naar de linker kant van de header gelabled met +5V geplaatst worden. Deze +5V voeding is nodig om het op de USB-poort aangesloten apparaat te laten functioneren.

Wanneer om de microfoon uit te lezen met de ADC moet deze ook via de USB-poort gevoed worden. Wanneer gewenst is om dit ook via de USB-poort op de PCB te doen is de hierboven genoemde jumper ook nodig.
