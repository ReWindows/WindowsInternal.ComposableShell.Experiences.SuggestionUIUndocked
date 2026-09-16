#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 2 member(s).
namespace Windows::Data::Json {
class JsonObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@JsonObject@Json@Data@Windows@@SAPE$AAV1234@PE$AAVString@Platform@@@Z
    static ::Windows::Data::Json::JsonObject & * Parse(::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryParse@JsonObject@Json@Data@Windows@@SA_NPE$AAVString@Platform@@PEAPE$AAV1234@@Z
    static bool TryParse(::Platform::String & *, ::Windows::Data::Json::JsonObject & * *);
};
} // namespace Windows::Data::Json
