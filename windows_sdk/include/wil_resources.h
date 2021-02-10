#ifndef MRTCOREEX_WIL_RESOURCES_H
#define MRTCOREEX_WIL_RESOURCES_H

#include <memory>

namespace wil {
    template<typename TDeletionFunction, TDeletionFunction func>
    struct function_deleter {
        template<typename TThing>
        void operator() (TThing *thing) {
            func(thing);
        }
    };
};

namespace wistd {
    using std::unique_ptr;
}

#endif //MRTCOREEX_WIL_RESOURCES_H
