printf("Enter Your Time Using 24-hours format :");
scanf("%d",&time);
if(time>=5 && time<=11){
printf("Good Morning");
}

else if (time>=12 && time<=18){
printf("Good Evening");
}

else if (time>18 && time==24){
printf("Good Night");
}
else{
printf("Go to Bed ");
}
return 0;
}


