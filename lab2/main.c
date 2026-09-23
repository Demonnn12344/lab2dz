#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Russian");

    
    const double WALK_SPEED = 4.0;  
    const double SPEED_RATIO = 3.0; 

    
    double x = 18.0; 

    
    double run_speed = WALK_SPEED * SPEED_RATIO; 
    double time_hours = x / run_speed;            
    double time_minutes = time_hours * 60.0;      

    
    printf("=================================================================\n");
    printf("              РАСЧЕТ ВРЕМЕНИ БЕГА НА МАРАФОНЕ                    \n");
    printf("=================================================================\n");
    printf("Условие и исходные данные:\n");
    printf("  • Скорость ходьбы мальчика: %.2f км/ч\n", WALK_SPEED);
    printf("  • Коэффициент ускорения бега: в %.0f раза быстрее\n", SPEED_RATIO);
    printf("  • Скорость бега мальчика: %.2f км/ч\n", run_speed);
    printf("  • Преодолённая дистанция (х): %.2f км\n", x);
    printf("-----------------------------------------------------------------\n");
    printf("Результаты расчетов:\n");
    printf("  • Время на преодоление дистанции (в часах): %.2f ч.\n", time_hours);
    printf("  • Время на преодоление дистанции (в минутах): %.0f мин.\n", time_minutes);
    printf("-----------------------------------------------------------------\n");
    printf("ИТОГОВЫЙ ОТВЕТ:\n");
    printf("  На преодоление расстояния в %.2f км со скоростью %.2f км/ч\n", x, run_speed);
    printf("  мальчик затратил %.2f часа (или %.0f минут).\n", time_hours, time_minutes);
    printf("=================================================================\n");

    return 0;
}