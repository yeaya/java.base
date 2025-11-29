#include <sun/security/provider/PolicyParser$KeyStoreEntry.h>

#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/security/provider/PolicyParser.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _PolicyParser$KeyStoreEntry_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PolicyParser$KeyStoreEntry, name)},
	{"properties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(PolicyParser$KeyStoreEntry, properties)},
	{}
};

$MethodInfo _PolicyParser$KeyStoreEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/Map;)V", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", 0, $method(static_cast<void(PolicyParser$KeyStoreEntry::*)($String*,$Map*)>(&PolicyParser$KeyStoreEntry::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getProperties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PolicyParser$KeyStoreEntry_InnerClassesInfo_[] = {
	{"sun.security.provider.PolicyParser$KeyStoreEntry", "sun.security.provider.PolicyParser", "KeyStoreEntry", $STATIC},
	{}
};

$ClassInfo _PolicyParser$KeyStoreEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.PolicyParser$KeyStoreEntry",
	"java.lang.Object",
	nullptr,
	_PolicyParser$KeyStoreEntry_FieldInfo_,
	_PolicyParser$KeyStoreEntry_MethodInfo_,
	nullptr,
	nullptr,
	_PolicyParser$KeyStoreEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.PolicyParser"
};

$Object* allocate$PolicyParser$KeyStoreEntry($Class* clazz) {
	return $of($alloc(PolicyParser$KeyStoreEntry));
}

void PolicyParser$KeyStoreEntry::init$($String* name, $Map* properties) {
	$set(this, name, name);
	$set(this, properties, properties);
}

$String* PolicyParser$KeyStoreEntry::getName() {
	return this->name;
}

$Map* PolicyParser$KeyStoreEntry::getProperties() {
	return this->properties;
}

$String* PolicyParser$KeyStoreEntry::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, s, $$new($StringBuilder, "\n    keystore "_s)->append(this->name));
	if (this->properties != nullptr) {
		{
			$var($Iterator, i$, $nc($($nc(this->properties)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, property, $cast($Map$Entry, i$->next()));
				{
					s->append("\n        "_s)->append($cast($String, $($nc(property)->getKey())))->append(u'=')->append($cast($String, $($nc(property)->getValue())));
				}
			}
		}
	}
	s->append(";"_s);
	return s->toString();
}

PolicyParser$KeyStoreEntry::PolicyParser$KeyStoreEntry() {
}

$Class* PolicyParser$KeyStoreEntry::load$($String* name, bool initialize) {
	$loadClass(PolicyParser$KeyStoreEntry, name, initialize, &_PolicyParser$KeyStoreEntry_ClassInfo_, allocate$PolicyParser$KeyStoreEntry);
	return class$;
}

$Class* PolicyParser$KeyStoreEntry::class$ = nullptr;

		} // provider
	} // security
} // sun