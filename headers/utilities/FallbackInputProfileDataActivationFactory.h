#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 2 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked {
class __FallbackInputProfileDataActivationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFactory@__FallbackInputProfileDataActivationFactory@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@SAJPEAIPEAU__abi___classObjectEntry@@AEAVGuid@Platform@@PEAPEAU__abi_IUnknown@@@Z
    static long CreateFactory(unsigned int *, __abi___classObjectEntry *, ::Platform::Guid &, __abi_IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetClassName@__FallbackInputProfileDataActivationFactory@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@SAPEB_WXZ
    static wchar_t const * GetTargetClassName();
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked
