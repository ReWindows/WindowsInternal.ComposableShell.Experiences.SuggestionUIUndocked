#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace Windows::Data::Json {
class JsonValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBooleanValue@JsonValue@Json@Data@Windows@@SAPE$AAV1234@_N@Z
    static ::Windows::Data::Json::JsonValue & * CreateBooleanValue(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNullValue@JsonValue@Json@Data@Windows@@SAPE$AAV1234@XZ
    static ::Windows::Data::Json::JsonValue & * CreateNullValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNumberValue@JsonValue@Json@Data@Windows@@SAPE$AAV1234@N@Z
    static ::Windows::Data::Json::JsonValue & * CreateNumberValue(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStringValue@JsonValue@Json@Data@Windows@@SAPE$AAV1234@PE$AAVString@Platform@@@Z
    static ::Windows::Data::Json::JsonValue & * CreateStringValue(::Platform::String & *);
};
} // namespace Windows::Data::Json
