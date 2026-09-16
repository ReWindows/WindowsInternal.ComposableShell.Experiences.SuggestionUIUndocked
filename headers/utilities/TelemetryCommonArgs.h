#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 5 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked {
class TelemetryCommonArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TelemetryCommonArgs@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@SAX_K@Z
    static void CreateInstance(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyInstance@TelemetryCommonArgs@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@SAX_K@Z
    static void DestroyInstance(uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TelemetryCommonArgs@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@AEBU01234@@Z
    TelemetryCommonArgs(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TelemetryCommonArgs@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~TelemetryCommonArgs();
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked
