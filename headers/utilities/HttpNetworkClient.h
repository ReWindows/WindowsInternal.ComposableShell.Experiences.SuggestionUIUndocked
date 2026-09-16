#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 2 member(s).
class HttpNetworkClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySendRequestAsync@HttpNetworkClient@@UEAA?AU?$IAsyncOperationWithProgress@UHttpRequestResult@Http@Web@Windows@winrt@@UHttpProgress@2345@@Foundation@Windows@winrt@@UHttpRequestMessage@Http@Web@45@@Z
    virtual WindissectOpaque TrySendRequestAsync(WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeHttpClient@HttpNetworkClient@@CA?AUHttpClient@Http@Web@Windows@winrt@@AEBUhstring@6@0@Z
    static WindissectOpaque MakeHttpClient(WindissectOpaque const &, WindissectOpaque const &);
};
