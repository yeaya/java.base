#include <sun/nio/fs/WindowsSecurityDescriptor.h>
#include <java/io/IOException.h>
#include <java/lang/Math.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/ProviderMismatchException.h>
#include <java/nio/file/attribute/AclEntry$Builder.h>
#include <java/nio/file/attribute/AclEntry.h>
#include <java/nio/file/attribute/AclEntryFlag.h>
#include <java/nio/file/attribute/AclEntryPermission.h>
#include <java/nio/file/attribute/AclEntryType.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <java/util/ArrayList.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <sun/nio/fs/NativeBuffers.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsNativeDispatcher$AclInformation.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <sun/nio/fs/WindowsUserPrincipals$User.h>
#include <sun/nio/fs/WindowsUserPrincipals.h>
#include <jcpp.h>

#undef ALLOW
#undef APPEND_DATA
#undef DELETE
#undef DELETE_CHILD
#undef DENY
#undef DIRECTORY_INHERIT
#undef EXECUTE
#undef FILE_INHERIT
#undef INHERIT_ONLY
#undef NO_PROPAGATE_INHERIT
#undef NULL_DESCRIPTOR
#undef OFFSETOF_ACCESS_MASK
#undef OFFSETOF_FLAGS
#undef OFFSETOF_SID
#undef OFFSETOF_TYPE
#undef READ_ACL
#undef READ_ATTRIBUTES
#undef READ_DATA
#undef READ_NAMED_ATTRS
#undef SIZEOF_ACCESS_ALLOWED_ACE
#undef SIZEOF_ACCESS_DENIED_ACE
#undef SIZEOF_ACL
#undef SIZEOF_SECURITY_DESCRIPTOR
#undef SYNCHRONIZE
#undef WRITE_ACL
#undef WRITE_ATTRIBUTES
#undef WRITE_DATA
#undef WRITE_NAMED_ATTRS
#undef WRITE_OWNER

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ProviderMismatchException = ::java::nio::file::ProviderMismatchException;
using $AclEntry = ::java::nio::file::attribute::AclEntry;
using $AclEntryFlag = ::java::nio::file::attribute::AclEntryFlag;
using $AclEntryPermission = ::java::nio::file::attribute::AclEntryPermission;
using $AclEntryType = ::java::nio::file::attribute::AclEntryType;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $ArrayList = ::java::util::ArrayList;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $NativeBuffers = ::sun::nio::fs::NativeBuffers;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;
using $WindowsNativeDispatcher$AclInformation = ::sun::nio::fs::WindowsNativeDispatcher$AclInformation;
using $WindowsUserPrincipals = ::sun::nio::fs::WindowsUserPrincipals;
using $WindowsUserPrincipals$User = ::sun::nio::fs::WindowsUserPrincipals$User;

namespace sun {
	namespace nio {
		namespace fs {

$Unsafe* WindowsSecurityDescriptor::unsafe = nullptr;
WindowsSecurityDescriptor* WindowsSecurityDescriptor::NULL_DESCRIPTOR = nullptr;

void WindowsSecurityDescriptor::init$() {
	$set(this, sidList, nullptr);
	$set(this, aclBuffer, nullptr);
	$set(this, sdBuffer, nullptr);
}

void WindowsSecurityDescriptor::init$($List* acl$renamed) {
	$useLocalObjectStack();
	$var($List, acl, acl$renamed);
	bool initialized = false;
	$assign(acl, $new($ArrayList, acl));
	$set(this, sidList, $new($ArrayList, acl->size()));
	$var($Throwable, var$0, nullptr);
	try {
		try {
			int32_t size = WindowsSecurityDescriptor::SIZEOF_ACL;
			{
				$var($Iterator, i$, acl->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($AclEntry, entry, $cast($AclEntry, i$->next()));
					{
						$var($UserPrincipal, user, $nc(entry)->principal());
						if (!($instanceOf($WindowsUserPrincipals$User, user))) {
							$throwNew($ProviderMismatchException);
						}
						$var($String, sidString, $nc($cast($WindowsUserPrincipals$User, user))->sidString());
						try {
							int64_t pSid = $WindowsNativeDispatcher::ConvertStringSidToSid(sidString);
							this->sidList->add($($Long::valueOf(pSid)));
							int32_t var$1 = $WindowsNativeDispatcher::GetLengthSid(pSid);
							size += var$1 + $Math::max((int32_t)WindowsSecurityDescriptor::SIZEOF_ACCESS_ALLOWED_ACE, WindowsSecurityDescriptor::SIZEOF_ACCESS_DENIED_ACE);
						} catch ($WindowsException& x) {
							$var($StringBuilder, var$2, $new($StringBuilder));
							var$2->append("Failed to get SID for "_s);
							var$2->append($(user->getName()));
							var$2->append(": "_s);
							var$2->append($(x->errorString()));
							$throwNew($IOException, $$str(var$2));
						}
					}
				}
			}
			$set(this, aclBuffer, $NativeBuffers::getNativeBuffer(size));
			$set(this, sdBuffer, $NativeBuffers::getNativeBuffer(WindowsSecurityDescriptor::SIZEOF_SECURITY_DESCRIPTOR));
			$WindowsNativeDispatcher::InitializeAcl($nc(this->aclBuffer)->address(), size);
			int32_t i = 0;
			while (i < acl->size()) {
				$var($AclEntry, entry, $cast($AclEntry, acl->get(i)));
				int64_t pSid = $$sure($Long, this->sidList->get(i))->longValue();
				try {
					encode(entry, pSid, this->aclBuffer->address());
				} catch ($WindowsException& x) {
					$throwNew($IOException, $$str({"Failed to encode ACE: "_s, $(x->errorString())}));
				}
				++i;
			}
			$WindowsNativeDispatcher::InitializeSecurityDescriptor($nc(this->sdBuffer)->address());
			int64_t var$3 = this->sdBuffer->address();
			$WindowsNativeDispatcher::SetSecurityDescriptorDacl(var$3, this->aclBuffer->address());
			initialized = true;
		} catch ($WindowsException& x) {
			$throwNew($IOException, $(x->getMessage()));
		}
	} catch ($Throwable& var$4) {
		$assign(var$0, var$4);
	} /*finally*/ {
		if (!initialized) {
			release();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void WindowsSecurityDescriptor::release() {
	$useLocalObjectStack();
	if (this->sdBuffer != nullptr) {
		this->sdBuffer->release();
	}
	if (this->aclBuffer != nullptr) {
		this->aclBuffer->release();
	}
	if (this->sidList != nullptr) {
		$var($Iterator, i$, this->sidList->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Long, sid, $cast($Long, i$->next()));
			{
				$WindowsNativeDispatcher::LocalFree($nc(sid)->longValue());
			}
		}
	}
}

int64_t WindowsSecurityDescriptor::address() {
	return (this->sdBuffer == nullptr) ? 0 : this->sdBuffer->address();
}

$AclEntry* WindowsSecurityDescriptor::decode(int64_t aceAddress) {
	$init(WindowsSecurityDescriptor);
	$useLocalObjectStack();
	int8_t aceType = $nc(WindowsSecurityDescriptor::unsafe)->getByte(aceAddress + WindowsSecurityDescriptor::OFFSETOF_TYPE);
	if (aceType != 0 && aceType != 1) {
		return nullptr;
	}
	$AclEntryType* type = nullptr;
	if (aceType == 0) {
		$init($AclEntryType);
		type = $AclEntryType::ALLOW;
	} else {
		$init($AclEntryType);
		type = $AclEntryType::DENY;
	}
	int8_t aceFlags = WindowsSecurityDescriptor::unsafe->getByte(aceAddress + WindowsSecurityDescriptor::OFFSETOF_FLAGS);
	$load($AclEntryFlag);
	$var($Set, flags, $EnumSet::noneOf($AclEntryFlag::class$));
	if ((aceFlags & (int8_t)1) != 0) {
		$init($AclEntryFlag);
		$nc(flags)->add($AclEntryFlag::FILE_INHERIT);
	}
	if ((aceFlags & (int8_t)2) != 0) {
		$init($AclEntryFlag);
		$nc(flags)->add($AclEntryFlag::DIRECTORY_INHERIT);
	}
	if ((aceFlags & (int8_t)4) != 0) {
		$init($AclEntryFlag);
		$nc(flags)->add($AclEntryFlag::NO_PROPAGATE_INHERIT);
	}
	if ((aceFlags & (int8_t)8) != 0) {
		$init($AclEntryFlag);
		$nc(flags)->add($AclEntryFlag::INHERIT_ONLY);
	}
	int32_t mask = WindowsSecurityDescriptor::unsafe->getInt(aceAddress + WindowsSecurityDescriptor::OFFSETOF_ACCESS_MASK);
	$load($AclEntryPermission);
	$var($Set, perms, $EnumSet::noneOf($AclEntryPermission::class$));
	if ((mask & 1) > 0) {
		$init($AclEntryPermission);
		$nc(perms)->add($AclEntryPermission::READ_DATA);
	}
	if ((mask & 2) > 0) {
		$init($AclEntryPermission);
		$nc(perms)->add($AclEntryPermission::WRITE_DATA);
	}
	if ((mask & 4) > 0) {
		$init($AclEntryPermission);
		$nc(perms)->add($AclEntryPermission::APPEND_DATA);
	}
	if ((mask & 8) > 0) {
		$init($AclEntryPermission);
		$nc(perms)->add($AclEntryPermission::READ_NAMED_ATTRS);
	}
	if ((mask & 0x10) > 0) {
		$init($AclEntryPermission);
		$nc(perms)->add($AclEntryPermission::WRITE_NAMED_ATTRS);
	}
	if ((mask & 0x20) > 0) {
		$init($AclEntryPermission);
		$nc(perms)->add($AclEntryPermission::EXECUTE);
	}
	if ((mask & 0x40) > 0) {
		$init($AclEntryPermission);
		$nc(perms)->add($AclEntryPermission::DELETE_CHILD);
	}
	if ((mask & 0x80) > 0) {
		$init($AclEntryPermission);
		$nc(perms)->add($AclEntryPermission::READ_ATTRIBUTES);
	}
	if ((mask & 0x0100) > 0) {
		$init($AclEntryPermission);
		$nc(perms)->add($AclEntryPermission::WRITE_ATTRIBUTES);
	}
	if ((mask & 0x00010000) > 0) {
		$init($AclEntryPermission);
		$nc(perms)->add($AclEntryPermission::DELETE);
	}
	if ((mask & 0x00020000) > 0) {
		$init($AclEntryPermission);
		$nc(perms)->add($AclEntryPermission::READ_ACL);
	}
	if ((mask & 0x00040000) > 0) {
		$init($AclEntryPermission);
		$nc(perms)->add($AclEntryPermission::WRITE_ACL);
	}
	if ((mask & 0x00080000) > 0) {
		$init($AclEntryPermission);
		$nc(perms)->add($AclEntryPermission::WRITE_OWNER);
	}
	if ((mask & 0x00100000) > 0) {
		$init($AclEntryPermission);
		$nc(perms)->add($AclEntryPermission::SYNCHRONIZE);
	}
	int64_t sidAddress = aceAddress + WindowsSecurityDescriptor::OFFSETOF_SID;
	$var($UserPrincipal, user, $WindowsUserPrincipals::fromSid(sidAddress));
	return $$nc($$nc($$nc($$nc($$nc($AclEntry::newBuilder())->setType(type))->setPrincipal(user))->setFlags(flags))->setPermissions(perms))->build();
}

void WindowsSecurityDescriptor::encode($AclEntry* ace, int64_t sidAddress, int64_t aclAddress) {
	$init(WindowsSecurityDescriptor);
	$useLocalObjectStack();
	$init($AclEntryType);
	bool var$0 = $nc(ace)->type() != $AclEntryType::ALLOW;
	if (var$0 && ace->type() != $AclEntryType::DENY) {
		return;
	}
	bool allow = (ace->type() == $AclEntryType::ALLOW);
	$var($Set, aceMask, ace->permissions());
	int32_t mask = 0;
	$init($AclEntryPermission);
	if ($nc(aceMask)->contains($AclEntryPermission::READ_DATA)) {
		mask |= 1;
	}
	if (aceMask->contains($AclEntryPermission::WRITE_DATA)) {
		mask |= 2;
	}
	if (aceMask->contains($AclEntryPermission::APPEND_DATA)) {
		mask |= 4;
	}
	if (aceMask->contains($AclEntryPermission::READ_NAMED_ATTRS)) {
		mask |= 8;
	}
	if (aceMask->contains($AclEntryPermission::WRITE_NAMED_ATTRS)) {
		mask |= 16;
	}
	if (aceMask->contains($AclEntryPermission::EXECUTE)) {
		mask |= 32;
	}
	if (aceMask->contains($AclEntryPermission::DELETE_CHILD)) {
		mask |= 64;
	}
	if (aceMask->contains($AclEntryPermission::READ_ATTRIBUTES)) {
		mask |= 128;
	}
	if (aceMask->contains($AclEntryPermission::WRITE_ATTRIBUTES)) {
		mask |= 256;
	}
	if (aceMask->contains($AclEntryPermission::DELETE)) {
		mask |= 0x00010000;
	}
	if (aceMask->contains($AclEntryPermission::READ_ACL)) {
		mask |= 0x00020000;
	}
	if (aceMask->contains($AclEntryPermission::WRITE_ACL)) {
		mask |= 0x00040000;
	}
	if (aceMask->contains($AclEntryPermission::WRITE_OWNER)) {
		mask |= 0x00080000;
	}
	if (aceMask->contains($AclEntryPermission::SYNCHRONIZE)) {
		mask |= 0x00100000;
	}
	$var($Set, aceFlags, ace->flags());
	int8_t flags = 0;
	$init($AclEntryFlag);
	if ($nc(aceFlags)->contains($AclEntryFlag::FILE_INHERIT)) {
		flags |= 1;
	}
	if (aceFlags->contains($AclEntryFlag::DIRECTORY_INHERIT)) {
		flags |= 2;
	}
	if (aceFlags->contains($AclEntryFlag::NO_PROPAGATE_INHERIT)) {
		flags |= 4;
	}
	if (aceFlags->contains($AclEntryFlag::INHERIT_ONLY)) {
		flags |= 8;
	}
	if (allow) {
		$WindowsNativeDispatcher::AddAccessAllowedAceEx(aclAddress, flags, mask, sidAddress);
	} else {
		$WindowsNativeDispatcher::AddAccessDeniedAceEx(aclAddress, flags, mask, sidAddress);
	}
}

WindowsSecurityDescriptor* WindowsSecurityDescriptor::create($List* acl) {
	$init(WindowsSecurityDescriptor);
	return $new(WindowsSecurityDescriptor, acl);
}

WindowsSecurityDescriptor* WindowsSecurityDescriptor::fromAttribute($FileAttributeArray* attrs) {
	$init(WindowsSecurityDescriptor);
	$useLocalObjectStack();
	$var(WindowsSecurityDescriptor, sd, WindowsSecurityDescriptor::NULL_DESCRIPTOR);
	{
		$var($FileAttributeArray, arr$, attrs);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($FileAttribute, attr, arr$->get(i$));
			{
				if (sd != WindowsSecurityDescriptor::NULL_DESCRIPTOR) {
					$nc(sd)->release();
				}
				if (attr == nullptr) {
					$throwNew($NullPointerException);
				}
				if ($$nc($nc(attr)->name())->equals("acl:acl"_s)) {
					$var($List, acl, $cast($List, attr->value()));
					$assign(sd, $new(WindowsSecurityDescriptor, acl));
				} else {
					$throwNew($UnsupportedOperationException, $$str({"\'"_s, $(attr->name()), "\' not supported as initial attribute"_s}));
				}
			}
		}
	}
	return sd;
}

$List* WindowsSecurityDescriptor::getAcl(int64_t pSecurityDescriptor) {
	$init(WindowsSecurityDescriptor);
	$useLocalObjectStack();
	int64_t aclAddress = $WindowsNativeDispatcher::GetSecurityDescriptorDacl(pSecurityDescriptor);
	int32_t aceCount = 0;
	if (aclAddress == 0) {
		aceCount = 0;
	} else {
		$var($WindowsNativeDispatcher$AclInformation, aclInfo, $WindowsNativeDispatcher::GetAclInformation(aclAddress));
		aceCount = $nc(aclInfo)->aceCount();
	}
	$var($ArrayList, result, $new($ArrayList, aceCount));
	for (int32_t i = 0; i < aceCount; ++i) {
		int64_t aceAddress = $WindowsNativeDispatcher::GetAce(aclAddress, i);
		$var($AclEntry, entry, decode(aceAddress));
		if (entry != nullptr) {
			result->add(entry);
		}
	}
	return result;
}

void WindowsSecurityDescriptor::clinit$($Class* clazz) {
	$assignStatic(WindowsSecurityDescriptor::unsafe, $Unsafe::getUnsafe());
	$assignStatic(WindowsSecurityDescriptor::NULL_DESCRIPTOR, $new(WindowsSecurityDescriptor));
}

WindowsSecurityDescriptor::WindowsSecurityDescriptor() {
}

$Class* WindowsSecurityDescriptor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsSecurityDescriptor, unsafe)},
		{"SIZEOF_ACL", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsSecurityDescriptor, SIZEOF_ACL)},
		{"SIZEOF_ACCESS_ALLOWED_ACE", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsSecurityDescriptor, SIZEOF_ACCESS_ALLOWED_ACE)},
		{"SIZEOF_ACCESS_DENIED_ACE", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsSecurityDescriptor, SIZEOF_ACCESS_DENIED_ACE)},
		{"SIZEOF_SECURITY_DESCRIPTOR", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsSecurityDescriptor, SIZEOF_SECURITY_DESCRIPTOR)},
		{"OFFSETOF_TYPE", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsSecurityDescriptor, OFFSETOF_TYPE)},
		{"OFFSETOF_FLAGS", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsSecurityDescriptor, OFFSETOF_FLAGS)},
		{"OFFSETOF_ACCESS_MASK", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsSecurityDescriptor, OFFSETOF_ACCESS_MASK)},
		{"OFFSETOF_SID", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsSecurityDescriptor, OFFSETOF_SID)},
		{"NULL_DESCRIPTOR", "Lsun/nio/fs/WindowsSecurityDescriptor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsSecurityDescriptor, NULL_DESCRIPTOR)},
		{"sidList", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Long;>;", $PRIVATE | $FINAL, $field(WindowsSecurityDescriptor, sidList)},
		{"aclBuffer", "Lsun/nio/fs/NativeBuffer;", nullptr, $PRIVATE | $FINAL, $field(WindowsSecurityDescriptor, aclBuffer)},
		{"sdBuffer", "Lsun/nio/fs/NativeBuffer;", nullptr, $PRIVATE | $FINAL, $field(WindowsSecurityDescriptor, sdBuffer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsSecurityDescriptor, init$, void)},
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/file/attribute/AclEntry;>;)V", $PRIVATE, $method(WindowsSecurityDescriptor, init$, void, $List*), "java.io.IOException"},
		{"address", "()J", nullptr, 0, $virtualMethod(WindowsSecurityDescriptor, address, int64_t)},
		{"create", "(Ljava/util/List;)Lsun/nio/fs/WindowsSecurityDescriptor;", "(Ljava/util/List<Ljava/nio/file/attribute/AclEntry;>;)Lsun/nio/fs/WindowsSecurityDescriptor;", $STATIC, $staticMethod(WindowsSecurityDescriptor, create, WindowsSecurityDescriptor*, $List*), "java.io.IOException"},
		{"decode", "(J)Ljava/nio/file/attribute/AclEntry;", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsSecurityDescriptor, decode, $AclEntry*, int64_t), "java.io.IOException"},
		{"encode", "(Ljava/nio/file/attribute/AclEntry;JJ)V", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsSecurityDescriptor, encode, void, $AclEntry*, int64_t, int64_t), "sun.nio.fs.WindowsException"},
		{"fromAttribute", "([Ljava/nio/file/attribute/FileAttribute;)Lsun/nio/fs/WindowsSecurityDescriptor;", "([Ljava/nio/file/attribute/FileAttribute<*>;)Lsun/nio/fs/WindowsSecurityDescriptor;", $STATIC | $TRANSIENT, $staticMethod(WindowsSecurityDescriptor, fromAttribute, WindowsSecurityDescriptor*, $FileAttributeArray*), "java.io.IOException"},
		{"getAcl", "(J)Ljava/util/List;", "(J)Ljava/util/List<Ljava/nio/file/attribute/AclEntry;>;", $STATIC, $staticMethod(WindowsSecurityDescriptor, getAcl, $List*, int64_t), "java.io.IOException"},
		{"release", "()V", nullptr, 0, $virtualMethod(WindowsSecurityDescriptor, release, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsSecurityDescriptor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WindowsSecurityDescriptor, name, initialize, &classInfo$$, WindowsSecurityDescriptor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsSecurityDescriptor);
	});
	return class$;
}

$Class* WindowsSecurityDescriptor::class$ = nullptr;

		} // fs
	} // nio
} // sun