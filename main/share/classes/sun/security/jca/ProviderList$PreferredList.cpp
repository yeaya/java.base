#include <sun/security/jca/ProviderList$PreferredList.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $List = ::java::util::List;
using $ProviderList = ::sun::security::jca::ProviderList;
using $ProviderList$PreferredEntry = ::sun::security::jca::ProviderList$PreferredEntry;
using $ProviderList$ServiceList = ::sun::security::jca::ProviderList$ServiceList;
using $ServiceId = ::sun::security::jca::ServiceId;

namespace sun {
	namespace security {
		namespace jca {

$FieldInfo _ProviderList$PreferredList_FieldInfo_[] = {
	{"list", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/security/jca/ProviderList$PreferredEntry;>;", 0, $field(ProviderList$PreferredList, list)},
	{}
};

$MethodInfo _ProviderList$PreferredList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ProviderList$PreferredList::*)()>(&ProviderList$PreferredList::init$))},
	{"add", "(Lsun/security/jca/ProviderList$PreferredEntry;)Z", nullptr, $PUBLIC, $method(static_cast<bool(ProviderList$PreferredList::*)($ProviderList$PreferredEntry*)>(&ProviderList$PreferredList::add))},
	{"get", "(I)Lsun/security/jca/ProviderList$PreferredEntry;", nullptr, $PUBLIC, $method(static_cast<$ProviderList$PreferredEntry*(ProviderList$PreferredList::*)(int32_t)>(&ProviderList$PreferredList::get))},
	{"getAll", "(Lsun/security/jca/ProviderList$ServiceList;)Ljava/util/ArrayList;", "(Lsun/security/jca/ProviderList$ServiceList;)Ljava/util/ArrayList<Lsun/security/jca/ProviderList$PreferredEntry;>;", 0, $method(static_cast<$ArrayList*(ProviderList$PreferredList::*)($ProviderList$ServiceList*)>(&ProviderList$PreferredList::getAll))},
	{"getAll", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/ArrayList;", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/ArrayList<Lsun/security/jca/ProviderList$PreferredEntry;>;", 0, $method(static_cast<$ArrayList*(ProviderList$PreferredList::*)($String*,$String*)>(&ProviderList$PreferredList::getAll))},
	{"implGetAll", "(Ljava/util/ArrayList;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/util/ArrayList<Lsun/security/jca/ProviderList$PreferredEntry;>;Ljava/lang/String;Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(ProviderList$PreferredList::*)($ArrayList*,$String*,$String*)>(&ProviderList$PreferredList::implGetAll))},
	{"size", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ProviderList$PreferredList::*)()>(&ProviderList$PreferredList::size))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProviderList$PreferredList_InnerClassesInfo_[] = {
	{"sun.security.jca.ProviderList$PreferredList", "sun.security.jca.ProviderList", "PreferredList", $STATIC | $FINAL},
	{}
};

$ClassInfo _ProviderList$PreferredList_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.jca.ProviderList$PreferredList",
	"java.lang.Object",
	nullptr,
	_ProviderList$PreferredList_FieldInfo_,
	_ProviderList$PreferredList_MethodInfo_,
	nullptr,
	nullptr,
	_ProviderList$PreferredList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.jca.ProviderList"
};

$Object* allocate$ProviderList$PreferredList($Class* clazz) {
	return $of($alloc(ProviderList$PreferredList));
}

void ProviderList$PreferredList::init$() {
	$set(this, list, $new($ArrayList));
}

$ArrayList* ProviderList$PreferredList::getAll($ProviderList$ServiceList* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc(s)->ids == nullptr) {
		return getAll(s->type, s->algorithm);
	}
	$var($ArrayList, l, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($nc(s)->ids)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ServiceId, id, $cast($ServiceId, i$->next()));
			{
				implGetAll(l, $nc(id)->type, id->algorithm);
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
	$useLocalCurrentObjectStackCache();
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
	$loadClass(ProviderList$PreferredList, name, initialize, &_ProviderList$PreferredList_ClassInfo_, allocate$ProviderList$PreferredList);
	return class$;
}

$Class* ProviderList$PreferredList::class$ = nullptr;

		} // jca
	} // security
} // sun