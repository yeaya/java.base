#ifndef _javax_security_auth_Subject$SecureSet_h_
#define _javax_security_auth_Subject$SecureSet_h_
//$ class javax.security.auth.Subject$SecureSet
//$ extends java.util.Set
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/Set.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class LinkedList;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			class Subject;
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {

class Subject$SecureSet : public ::java::util::Set, public ::java::io::Serializable {
	$class(Subject$SecureSet, 0, ::java::util::Set, ::java::io::Serializable)
public:
	Subject$SecureSet();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::javax::security::auth::Subject* subject, int32_t which);
	void init$(::javax::security::auth::Subject* subject, int32_t which, ::java::util::LinkedList* list);
	virtual bool add(Object$* o) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	void readObject(::java::io::ObjectInputStream* ois);
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	using ::java::util::Set::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* oos);
	static const int64_t serialVersionUID = (int64_t)0x6DCC328017557E27;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	::javax::security::auth::Subject* subject = nullptr;
	::java::util::LinkedList* elements = nullptr;
	int32_t which = 0;
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_Subject$SecureSet_h_