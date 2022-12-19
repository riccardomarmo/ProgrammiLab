class Viaggio:

    def __init__(self, nome_viaggio, data_partenza, data_ritorno, localita, resort, prezzo, partecipanti, responsabile_viaggio):
        self.nome_viaggio = nome_viaggio
        self.nome_viaggio = nome_viaggio
        self.data_partenza = data_partenza 
        self.data_ritorno = data_ritorno 
        self.localita = localita
        self.resort = resort 
        self.prezzo = prezzo
        self.partecipanti = partecipanti  
        self.responsabile_viaggio = responsabile_viaggio

    def stampa(self):
        pass
         
    def periodo(self):
        pass

    def guadagno(self):
        pass


class ViaggioInvernale(Viaggio):

    def __init__(self, nome_viaggio, data_partenza, data_ritorno, localita, resort, prezzo, partecipanti, responsabile_viaggio, skipass, impianti_sciistici):
        super().__init__(nome_viaggio, data_partenza, data_ritorno, localita, resort, prezzo, partecipanti, responsabile_viaggio)
        self.skipass = skipass
        self.impianti_sciistici = impianti_sciistici

    

class ViaggioEstivo(Viaggio):
    def __init__(self, nome_viaggio, data_partenza, data_ritorno, localita, resort, prezzo, partecipanti, responsabile_viaggio, distanza, escursioni_marine):
        super().__init__(nome_viaggio, data_partenza, data_ritorno, localita, resort, prezzo, partecipanti, responsabile_viaggio)
        self.distanza = distanza
        self.escursioni_marine = escursioni_marine


