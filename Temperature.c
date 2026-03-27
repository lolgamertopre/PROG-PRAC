double convert_temperature(double celcius, char unit) {
    if (unit == 'F' || unit == 'f'){
        return (celcius * 9.0/5.0) + 32;
    } else if (unit == 'K' || unit == 'k'){
        return celcius +273.15;
    }else {
        return -1;
    }
    
}