#ifndef _sun_util_resources_ParallelListResourceBundle_h_
#define _sun_util_resources_ParallelListResourceBundle_h_
//$ class sun.util.resources.ParallelListResourceBundle
//$ extends java.util.ResourceBundle

#include <java/lang/Array.h>
#include <java/util/ResourceBundle.h>

namespace java {
	namespace util {
		class Enumeration;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicMarkableReference;
			}
		}
	}
}
namespace sun {
	namespace util {
		namespace resources {
			class OpenListResourceBundle;
		}
	}
}

namespace sun {
	namespace util {
		namespace resources {

class $import ParallelListResourceBundle : public ::java::util::ResourceBundle {
	$class(ParallelListResourceBundle, $NO_CLASS_INIT, ::java::util::ResourceBundle)
public:
	ParallelListResourceBundle();
	void init$();
	virtual bool areParallelContentsComplete();
	virtual bool containsKey($String* key) override;
	virtual $Array<::java::lang::Object, 2>* getContents() {return nullptr;}
	virtual ::java::util::Enumeration* getKeys() override;
	virtual ::java::util::ResourceBundle* getParent();
	virtual $Object* handleGetObject($String* key) override;
	virtual ::java::util::Set* handleKeySet() override;
	virtual ::java::util::Set* keySet() override;
	virtual void loadLookupTablesIfNecessary();
	virtual void resetKeySet();
	virtual void setParallelContents(::sun::util::resources::OpenListResourceBundle* rb);
	$volatile(::java::util::concurrent::ConcurrentMap*) lookup = nullptr;
	$volatile(::java::util::Set*) keyset = nullptr;
	::java::util::concurrent::atomic::AtomicMarkableReference* parallelContents = nullptr;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ParallelListResourceBundle_h_