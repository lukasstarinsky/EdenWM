#include "EdenWM.hpp"

i32 main()
{
    try
    {
        EdenWM wm {};
        wm.Run();

        return EXIT_SUCCESS;
    }
    catch (const std::runtime_error& e)
    {
        std::println(stderr, "{}", e.what());
        return EXIT_FAILURE;
    }
}