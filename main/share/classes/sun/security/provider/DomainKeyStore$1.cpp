#include <sun/security/provider/DomainKeyStore$1.h>

#include <java/security/KeyStore.h>
#include <java/security/KeyStoreException.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/NoSuchElementException.h>
#include <sun/security/provider/DomainKeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore = ::java::security::KeyStore;
using $KeyStoreException = ::java::security::KeyStoreException;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $DomainKeyStore = ::sun::security::provider::DomainKeyStore;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _DomainKeyStore$1_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/DomainKeyStore;", nullptr, $FINAL | $SYNTHETIC, $field(DomainKeyStore$1, this$0)},
	{"val$iterator", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(DomainKeyStore$1, val$iterator)},
	{"index", "I", nullptr, $PRIVATE, $field(DomainKeyStore$1, index)},
	{"keystoresEntry", "Ljava/util/Map$Entry;", "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/security/KeyStore;>;", $PRIVATE, $field(DomainKeyStore$1, keystoresEntry)},
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DomainKeyStore$1, prefix)},
	{"aliases", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/lang/String;>;", $PRIVATE, $field(DomainKeyStore$1, aliases)},
	{}
};

$MethodInfo _DomainKeyStore$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/DomainKeyStore;Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(DomainKeyStore$1::*)($DomainKeyStore*,$Iterator*)>(&DomainKeyStore$1::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DomainKeyStore$1_EnclosingMethodInfo_ = {
	"sun.security.provider.DomainKeyStore",
	"engineAliases",
	"()Ljava/util/Enumeration;"
};

$InnerClassInfo _DomainKeyStore$1_InnerClassesInfo_[] = {
	{"sun.security.provider.DomainKeyStore$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DomainKeyStore$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.DomainKeyStore$1",
	"java.lang.Object",
	"java.util.Enumeration",
	_DomainKeyStore$1_FieldInfo_,
	_DomainKeyStore$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/String;>;",
	&_DomainKeyStore$1_EnclosingMethodInfo_,
	_DomainKeyStore$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DomainKeyStore"
};

$Object* allocate$DomainKeyStore$1($Class* clazz) {
	return $of($alloc(DomainKeyStore$1));
}

void DomainKeyStore$1::init$($DomainKeyStore* this$0, $Iterator* val$iterator) {
	$set(this, this$0, this$0);
	$set(this, val$iterator, val$iterator);
	this->index = 0;
	$set(this, keystoresEntry, nullptr);
	$set(this, prefix, nullptr);
	$set(this, aliases, nullptr);
}

bool DomainKeyStore$1::hasMoreElements() {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->aliases == nullptr) {
			if ($nc(this->val$iterator)->hasNext()) {
				$set(this, keystoresEntry, $cast($Map$Entry, $nc(this->val$iterator)->next()));
				$set(this, prefix, $str({$cast($String, $($nc(this->keystoresEntry)->getKey())), this->this$0->entryNameSeparator}));
				$set(this, aliases, $nc(($cast($KeyStore, $($nc(this->keystoresEntry)->getValue()))))->aliases());
			} else {
				return false;
			}
		}
		if ($nc(this->aliases)->hasMoreElements()) {
			return true;
		} else if ($nc(this->val$iterator)->hasNext()) {
			$set(this, keystoresEntry, $cast($Map$Entry, $nc(this->val$iterator)->next()));
			$set(this, prefix, $str({$cast($String, $($nc(this->keystoresEntry)->getKey())), this->this$0->entryNameSeparator}));
			$set(this, aliases, $nc(($cast($KeyStore, $($nc(this->keystoresEntry)->getValue()))))->aliases());
		} else {
			return false;
		}
	} catch ($KeyStoreException& e) {
		return false;
	}
	return $nc(this->aliases)->hasMoreElements();
}

$Object* DomainKeyStore$1::nextElement() {
	if (hasMoreElements()) {
		return $of($str({this->prefix, $cast($String, $($nc(this->aliases)->nextElement()))}));
	}
	$throwNew($NoSuchElementException);
}

DomainKeyStore$1::DomainKeyStore$1() {
}

$Class* DomainKeyStore$1::load$($String* name, bool initialize) {
	$loadClass(DomainKeyStore$1, name, initialize, &_DomainKeyStore$1_ClassInfo_, allocate$DomainKeyStore$1);
	return class$;
}

$Class* DomainKeyStore$1::class$ = nullptr;

		} // provider
	} // security
} // sun