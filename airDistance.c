#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
  double pi = 3.14;
  double lat1, lat2, lon1, lon2;
  double radius = 6371;

  printf("Enter Latitude: \n");
  scanf ("%u %u", &lat1, &lat2);

  printf("Enter Longitude: \n");
  scanf ("%u %u", &lon1, &lon2);

  double radian1 = (lat1/180)*pi;
  double radian2 = (lat2/180)*pi;
  double radian3 = (lon1/180)*pi;
  double radian4 = (lon2/180)*pi;

  double distance = acos(sin(radian1)*sin(radian2)+cos(radian1)*cos(radian2)*cos(radian4-radian3))*radius;

  printf("%lu", distance);
}
