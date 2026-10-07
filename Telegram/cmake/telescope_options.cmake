# Telescope: build options of the fork.

set(TELESCOPE_REVISION "0" CACHE STRING "Telescope revision on top of the upstream version (0-9), the update counter of stable builds.")
if (NOT TELESCOPE_REVISION MATCHES "^[0-9]$")
    message(FATAL_ERROR "TELESCOPE_REVISION must be a single digit, got '${TELESCOPE_REVISION}'.")
endif()

target_compile_definitions(Telegram
PRIVATE
    TELESCOPE_REVISION=${TELESCOPE_REVISION}
)

option(TELESCOPE_PACKER "Build Packer, which signs update packages with our own key." OFF)
