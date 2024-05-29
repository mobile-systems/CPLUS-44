#include"Appliances.h"
#include"Device.h"

int main()
{
	Device dev(100);
	Appliances app(150);

	dev.ShowSpec();
	app.ShowSpec();

	return 0;
}
