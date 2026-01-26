#include <sun/security/jca/ProviderList$ServiceList.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/security/jca/ProviderConfig.h>
#include <sun/security/jca/ProviderList$PreferredEntry.h>
#include <sun/security/jca/ProviderList$PreferredList.h>
#include <sun/security/jca/ProviderList$ServiceList$1.h>
#include <sun/security/jca/ProviderList.h>
#include <sun/security/jca/ServiceId.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ProviderList = ::sun::security::jca::ProviderList;
using $ProviderList$PreferredEntry = ::sun::security::jca::ProviderList$PreferredEntry;
using $ProviderList$PreferredList = ::sun::security::jca::ProviderList$PreferredList;
using $ProviderList$ServiceList$1 = ::sun::security::jca::ProviderList$ServiceList$1;
using $ServiceId = ::sun::security::jca::ServiceId;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace jca {

$FieldInfo _ProviderList$ServiceList_FieldInfo_[] = {
	{"this$0", "Lsun/security/jca/ProviderList;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderList$ServiceList, this$0)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ProviderList$ServiceList, type)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ProviderList$ServiceList, algorithm)},
	{"ids", "Ljava/util/List;", "Ljava/util/List<Lsun/security/jca/ServiceId;>;", $PRIVATE | $FINAL, $field(ProviderList$ServiceList, ids)},
	{"firstService", "Ljava/security/Provider$Service;", nullptr, $PRIVATE, $field(ProviderList$ServiceList, firstService)},
	{"services", "Ljava/util/List;", "Ljava/util/List<Ljava/security/Provider$Service;>;", $PRIVATE, $field(ProviderList$ServiceList, services)},
	{"providerIndex", "I", nullptr, $PRIVATE, $field(ProviderList$ServiceList, providerIndex)},
	{"preferredList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/security/jca/ProviderList$PreferredEntry;>;", 0, $field(ProviderList$ServiceList, preferredList)},
	{"preferredIndex", "I", nullptr, $PRIVATE, $field(ProviderList$ServiceList, preferredIndex)},
	{}
};

$MethodInfo _ProviderList$ServiceList_MethodInfo_[] = {
	{"<init>", "(Lsun/security/jca/ProviderList;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(ProviderList$ServiceList, init$, void, $ProviderList*, $String*, $String*)},
	{"<init>", "(Lsun/security/jca/ProviderList;Ljava/util/List;)V", "(Ljava/util/List<Lsun/security/jca/ServiceId;>;)V", 0, $method(ProviderList$ServiceList, init$, void, $ProviderList*, $List*)},
	{"addService", "(Ljava/security/Provider$Service;)V", nullptr, $PRIVATE, $method(ProviderList$ServiceList, addService, void, $Provider$Service*)},
	{"get", "(I)Ljava/security/Provider$Service;", nullptr, $PUBLIC, $virtualMethod(ProviderList$ServiceList, get, $Object*, int32_t)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(ProviderList$ServiceList, isEmpty, bool)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/security/Provider$Service;>;", $PUBLIC, $virtualMethod(ProviderList$ServiceList, iterator, $Iterator*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ProviderList$ServiceList, size, int32_t)},
	{"tryGet", "(I)Ljava/security/Provider$Service;", nullptr, $PRIVATE, $method(ProviderList$ServiceList, tryGet, $Provider$Service*, int32_t)},
	{}
};

$InnerClassInfo _ProviderList$ServiceList_InnerClassesInfo_[] = {
	{"sun.security.jca.ProviderList$ServiceList", "sun.security.jca.ProviderList", "ServiceList", $PRIVATE | $FINAL},
	{"sun.security.jca.ProviderList$ServiceList$1", nullptr, nullptr, 0},
	{"java.security.Provider$Service", "java.security.Provider", "Service", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ProviderList$ServiceList_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.jca.ProviderList$ServiceList",
	"java.util.AbstractList",
	nullptr,
	_ProviderList$ServiceList_FieldInfo_,
	_ProviderList$ServiceList_MethodInfo_,
	"Ljava/util/AbstractList<Ljava/security/Provider$Service;>;",
	nullptr,
	_ProviderList$ServiceList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.jca.ProviderList"
};

$Object* allocate$ProviderList$ServiceList($Class* clazz) {
	return $of($alloc(ProviderList$ServiceList));
}

void ProviderList$ServiceList::init$($ProviderList* this$0, $String* type, $String* algorithm) {
	$set(this, this$0, this$0);
	$AbstractList::init$();
	this->providerIndex = 0;
	$set(this, preferredList, nullptr);
	this->preferredIndex = 0;
	$set(this, type, type);
	$set(this, algorithm, algorithm);
	$set(this, ids, nullptr);
}

void ProviderList$ServiceList::init$($ProviderList* this$0, $List* ids) {
	$set(this, this$0, this$0);
	$AbstractList::init$();
	this->providerIndex = 0;
	$set(this, preferredList, nullptr);
	this->preferredIndex = 0;
	$set(this, type, nullptr);
	$set(this, algorithm, nullptr);
	$set(this, ids, ids);
}

void ProviderList$ServiceList::addService($Provider$Service* s) {
	if (this->firstService == nullptr) {
		$set(this, firstService, s);
	} else {
		if (this->services == nullptr) {
			$set(this, services, $new($ArrayList, 4));
			$nc(this->services)->add(this->firstService);
		}
		$nc(this->services)->add(s);
	}
}

$Provider$Service* ProviderList$ServiceList::tryGet(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($Provider, p, nullptr);
	$init($ProviderList);
	if ($ProviderList::preferredPropList != nullptr && this->preferredList == nullptr) {
		$set(this, preferredList, $nc($ProviderList::preferredPropList)->getAll(this));
	}
	while (true) {
		if ((index == 0) && (this->firstService != nullptr)) {
			return this->firstService;
		} else if ((this->services != nullptr) && ($nc(this->services)->size() > index)) {
			return $cast($Provider$Service, $nc(this->services)->get(index));
		}
		if (this->providerIndex >= $nc(this->this$0->configs)->length) {
			return nullptr;
		}
		if (this->preferredList != nullptr && this->preferredIndex < $nc(this->preferredList)->size()) {
			$var($ProviderList$PreferredEntry, entry, $cast($ProviderList$PreferredEntry, $nc(this->preferredList)->get(this->preferredIndex++)));
			$assign(p, this->this$0->getProvider($nc(entry)->provider));
			if (p == nullptr) {
				if ($ProviderList::debug != nullptr) {
					$nc($ProviderList::debug)->println($$str({"No provider found with name: "_s, $nc(entry)->provider}));
				}
				continue;
			}
		} else {
			$assign(p, this->this$0->getProvider(this->providerIndex++));
		}
		if (this->type != nullptr) {
			$var($Provider$Service, s, $nc(p)->getService(this->type, this->algorithm));
			if (s != nullptr) {
				addService(s);
			}
		} else {
			{
				$var($Iterator, i$, $nc(this->ids)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($ServiceId, id, $cast($ServiceId, i$->next()));
					{
						$var($Provider$Service, s, $nc(p)->getService($nc(id)->type, id->algorithm));
						if (s != nullptr) {
							addService(s);
						}
					}
				}
			}
		}
	}
}

$Object* ProviderList$ServiceList::get(int32_t index) {
	$var($Provider$Service, s, tryGet(index));
	if (s == nullptr) {
		$throwNew($IndexOutOfBoundsException);
	}
	return $of(s);
}

int32_t ProviderList$ServiceList::size() {
	int32_t n = 0;
	if (this->services != nullptr) {
		n = $nc(this->services)->size();
	} else {
		n = (this->firstService != nullptr) ? 1 : 0;
	}
	while (tryGet(n) != nullptr) {
		++n;
	}
	return n;
}

bool ProviderList$ServiceList::isEmpty() {
	return (tryGet(0) == nullptr);
}

$Iterator* ProviderList$ServiceList::iterator() {
	return $new($ProviderList$ServiceList$1, this);
}

ProviderList$ServiceList::ProviderList$ServiceList() {
}

$Class* ProviderList$ServiceList::load$($String* name, bool initialize) {
	$loadClass(ProviderList$ServiceList, name, initialize, &_ProviderList$ServiceList_ClassInfo_, allocate$ProviderList$ServiceList);
	return class$;
}

$Class* ProviderList$ServiceList::class$ = nullptr;

		} // jca
	} // security
} // sun