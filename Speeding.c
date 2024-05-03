/* ~~~ Fine amounts per speeding charge ~~~ */
#define fine_one 0
#define fine_two 15
#define fine_three 30
#define fine_four 75
#define fine_five 100

/* ~~~ Ticket speed intervals, defined so user can change later if needed ~~~ */
#define max_speed_one 65
#define max_speed_two 70
#define max_speed_three 75
#define max_speed_four 80

/* ~~~ Main Function ~~~ */

void
main(void)
{
int speed
scanf("%d", speed)

if (speed <= max_speed_one )
printf("Speed of %d miles per hour is fined %d dollars." speed, fine_one)

else if (max_speed_one < speed <= max_speed_two)
printf(("Speed of %d miles per hour is fined %d dollars." speed, fine_two)

else if(max_speed_two < speed <= max_speed_three)
printf(("Speed of %d miles per hour is fined %d dollars." speed, max_speed_three)

else if(max_speed_three < speed <= max_speed_four)
printf(("Speed of %d miles per hour is fined %d dollars." speed, fine_four)

else if(max_speed_four < speed)
printf(("Speed of %d miles per hour is fined %d dollars." speed, fine_five)

return (0);
}
