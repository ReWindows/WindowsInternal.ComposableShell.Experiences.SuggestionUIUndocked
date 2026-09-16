#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 9 member(s).
namespace winrt {
class hresult_error {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z
    hresult_error(WindissectOpaque, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0hresult_error@winrt@@QEAA@AEBU01@@Z
    hresult_error(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z
    hresult_error(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z
    hresult_error(WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ
    WindissectOpaque message() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ
    WindissectOpaque to_abi() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1hresult_error@winrt@@QEAA@XZ
    ~hresult_error();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z
    static int fallback_RoOriginateLanguageException(int, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z
    void originate(WindissectOpaque, void *);
};
} // namespace winrt
