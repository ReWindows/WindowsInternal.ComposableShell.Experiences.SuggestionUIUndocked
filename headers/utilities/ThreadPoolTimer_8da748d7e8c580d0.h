#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 1 member(s).
namespace Windows::System::Threading {
class ThreadPoolTimer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTimer@ThreadPoolTimer@Threading@System@Windows@@SAPE$AAV1234@PE$AAVTimerElapsedHandler@234@VTimeSpan@Foundation@4@@Z
    static ::Windows::System::Threading::ThreadPoolTimer & * CreateTimer(::Windows::System::Threading::TimerElapsedHandler & *, ::Windows::Foundation::TimeSpan);
};
} // namespace Windows::System::Threading
