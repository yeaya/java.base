#ifndef _java_util_ResourceBundle$Control$CandidateListCache_h_
#define _java_util_ResourceBundle$Control$CandidateListCache_h_
//$ class java.util.ResourceBundle$Control$CandidateListCache
//$ extends sun.util.locale.LocaleObjectCache

#include <sun/util/locale/LocaleObjectCache.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace util {
		namespace locale {
			class BaseLocale;
		}
	}
}

namespace java {
	namespace util {

class ResourceBundle$Control$CandidateListCache : public ::sun::util::locale::LocaleObjectCache {
	$class(ResourceBundle$Control$CandidateListCache, $NO_CLASS_INIT, ::sun::util::locale::LocaleObjectCache)
public:
	ResourceBundle$Control$CandidateListCache();
	void init$();
	virtual ::java::util::List* createObject(::sun::util::locale::BaseLocale* base);
	virtual $Object* createObject(Object$* base) override;
	static ::java::util::List* getDefaultList($String* language, $String* script, $String* region, $String* variant);
};

	} // util
} // java

#endif // _java_util_ResourceBundle$Control$CandidateListCache_h_