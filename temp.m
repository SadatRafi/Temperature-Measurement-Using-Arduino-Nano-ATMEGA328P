temp = [-40 25 125];
ADC_value = [269 352 480];

p = polyfit (ADC_value, temp, 2);

x = [269 290 330 350 400 450 480];
y = polyval(p,x);


