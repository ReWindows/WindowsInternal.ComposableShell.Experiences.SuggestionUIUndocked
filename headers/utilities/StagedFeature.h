#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 2 member(s).
namespace WindowsUdk::System::Profile {
class StagedFeature {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfiguredFeatureState@StagedFeature@Profile@System@WindowsUdk@@SA?AW4FeatureEnablementState@234@IW4FeatureChangeTime@234@PEA_N1@Z
    static int GetConfiguredFeatureState(unsigned int, int, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfiguredFeatureVariant@StagedFeature@Profile@System@WindowsUdk@@SAEIW4FeatureChangeTime@234@PEA_NPEAPE$AAU?$IBox@I@Platform@@1@Z
    static unsigned char GetConfiguredFeatureVariant(unsigned int, int, bool *, WindissectOpaque & * *, bool *);
};
} // namespace WindowsUdk::System::Profile
