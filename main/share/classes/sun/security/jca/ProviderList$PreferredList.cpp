#include <sun/security/jca/ProviderList$PreferredList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/security/jca/ProviderList$PreferredEntry.h>
#include <sun/security/jca/ProviderList$ServiceList.h>
#include <sun/security/jca/ProviderList.h>
#include <sun/security/jca/ServiceId.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $ProviderList$PreferredEntry = ::sun::security::jca::ProviderList$PreferredEntry;
using $ProviderList$ServiceList = ::sun::security::jca::ProviderList$ServiceList;
using $ServiceId = ::sun::security::jca::ServiceId;

namespace sun {
	namespace security {
		namespace jca {

void ProviderList$PreferredList::init$() {
	$set(this, list, $new($ArrayList));
}

$ArrayList* ProviderList$PreferredList::getAll($ProviderList$ServiceList* s) {
	$useLocalObjectStack();
	if ($nc(s)->ids == nullptr) {
		return getAll(s->type, s->algorithm);
	}
	$var($ArrayList, l, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(s->ids)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ServiceId, id, $cast($ServiceId, i$->next()));
			{
				implGetAll(l, $nc(id)->type, $nc(id)->algorithm);
			}
		}
	}
	return l;
}

$ArrayList* ProviderList$PreferredList::getAll($String* type, $String* algorithm) {
	$var($ArrayList, l, $new($ArrayList));
	implGetAll(l, type, algorithm);
	return l;
}

void ProviderList$PreferredList::implGetAll($ArrayList* l, $String* type, $String* algorithm) {
	$var($ProviderList$PreferredEntry, e, nullptr);
	for (int32_t i = 0; i < size(); ++i) {
		$assign(e, $cast($ProviderList$PreferredEntry, $nc(this->list)->get(i)));
		if ($nc(e)->match(type, algorithm)) {
			$nc(l)->add(e);
		}
	}
}

$ProviderList$PreferredEntry* ProviderList$PreferredList::get(int32_t i) {
	return $cast($ProviderList$PreferredEntry, $nc(this->list)->get(i));
}

int32_t ProviderList$PreferredList::size() {
	return $nc(this->list)->size();
}

bool ProviderList$PreferredList::add($ProviderList$PreferredEntry* e) {
	return $nc(this->list)->add(e);
}

$String* ProviderList$PreferredList::toString() {
	$useLocalObjectStack();
	$var($String, s, ""_s);
	{
		$var($Iterator, i$, $nc(this->list)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ProviderList$PreferredEntry, e, $cast($ProviderList$PreferredEntry, i$->next()));
			{
				$plusAssign(s, $($nc(e)->toString()));
			}
		}
	}
	return s;
}

ProviderList$PreferredList::ProviderList$PreferredList() {
}

$Class* ProviderList$PreferredList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"list", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/security/jca/ProviderList$PreferredEntry;>;", 0, $field(ProviderList$PreferredList, list)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ProviderList$PreferredList, init$, void)},
		{"add", "(Lsun/security/jca/ProviderList$PreferredEntry;)Z", nullptr, $PUBLIC, $method(ProviderList$PreferredList, add, bool, $ProviderList$PreferredEntry*)},
		{"get", "(I)Lsun/security/jca/ProviderList$PreferredEntry;", nullptr, $PUBLIC, $method(ProviderList$PreferredList, get, $ProviderList$PreferredEntry*, int32_t)},
		{"getAll", "(Lsun/security/jca/ProviderList$ServiceList;)Ljava/util/ArrayList;", "(Lsun/security/jca/ProviderList$ServiceList;)Ljava/util/ArrayList<Lsun/security/jca/ProviderList$PreferredEntry;>;", 0, $method(ProviderList$PreferredList, getAll, $ArrayList*, $ProviderList$ServiceList*)},
		{"getAll", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/ArrayList;", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/ArrayList<Lsun/security/jca/ProviderList$PreferredEntry;>;", 0, $method(ProviderList$PreferredList, getAll, $ArrayList*, $String*, $String*)},
		{"implGetAll", "(Ljava/util/ArrayList;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/util/ArrayList<Lsun/security/jca/ProviderList$PreferredEntry;>;Ljava/lang/String;Ljava/lang/String;)V", $PRIVATE, $method(ProviderList$PreferredList, implGetAll, void, $ArrayList*, $String*, $String*)},
		{"size", "()I", nullptr, $PUBLIC, $method(ProviderList$PreferredList, size, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProviderList$PreferredList, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.ProviderList$PreferredList", "sun.security.jca.ProviderList", "PreferredList", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.jca.ProviderList$PreferredList",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jca.ProviderList"
	};
	$loadClass(ProviderList$PreferredList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProviderList$PreferredList);
	});
	return class$;
}

$Class* ProviderList$PreferredList::class$ = nullptr;

		} // jca
	} // security
} // sun