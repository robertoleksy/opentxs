/************************************************************
 *
 *  OTKeypair.hpp
 *
 */

/************************************************************
 -----BEGIN PGP SIGNED MESSAGE-----
 Hash: SHA1

 *                 OPEN TRANSACTIONS
 *
 *       Financial Cryptography and Digital Cash
 *       Library, Protocol, API, Server, CLI, GUI
 *
 *       -- Anonymous Numbered Accounts.
 *       -- Untraceable Digital Cash.
 *       -- Triple-Signed Receipts.
 *       -- Cheques, Vouchers, Transfers, Inboxes.
 *       -- Basket Currencies, Markets, Payment Plans.
 *       -- Signed, XML, Ricardian-style Contracts.
 *       -- Scripted smart contracts.
 *
 *  Copyright (C) 2010-2013 by "Fellow Traveler" (A pseudonym)
 *
 *  EMAIL:
 *  FellowTraveler@rayservers.net
 *
 *  BITCOIN:  1NtTPVVjDsUfDWybS4BwvHpG2pdS9RnYyQ
 *
 *  KEY FINGERPRINT (PGP Key in license file):
 *  9DD5 90EB 9292 4B48 0484  7910 0308 00ED F951 BB8E
 *
 *  OFFICIAL PROJECT WIKI(s):
 *  https://github.com/FellowTraveler/Moneychanger
 *  https://github.com/FellowTraveler/Open-Transactions/wiki
 *
 *  WEBSITE:
 *  http://www.OpenTransactions.org/
 *
 *  Components and licensing:
 *   -- Moneychanger..A Java client GUI.....LICENSE:.....GPLv3
 *   -- otlib.........A class library.......LICENSE:...LAGPLv3
 *   -- otapi.........A client API..........LICENSE:...LAGPLv3
 *   -- opentxs/ot....Command-line client...LICENSE:...LAGPLv3
 *   -- otserver......Server Application....LICENSE:....AGPLv3
 *  Github.com/FellowTraveler/Open-Transactions/wiki/Components
 *
 *  All of the above OT components were designed and written by
 *  Fellow Traveler, with the exception of Moneychanger, which
 *  was contracted out to Vicky C (bitcointrader4@gmail.com).
 *  The open-source community has since actively contributed.
 *
 *  -----------------------------------------------------
 *
 *   LICENSE:
 *   This program is free software: you can redistribute it
 *   and/or modify it under the terms of the GNU Affero
 *   General Public License as published by the Free Software
 *   Foundation, either version 3 of the License, or (at your
 *   option) any later version.
 *
 *   ADDITIONAL PERMISSION under the GNU Affero GPL version 3
 *   section 7: (This paragraph applies only to the LAGPLv3
 *   components listed above.) If you modify this Program, or
 *   any covered work, by linking or combining it with other
 *   code, such other code is not for that reason alone subject
 *   to any of the requirements of the GNU Affero GPL version 3.
 *   (==> This means if you are only using the OT API, then you
 *   don't have to open-source your code--only your changes to
 *   Open-Transactions itself must be open source. Similar to
 *   LGPLv3, except it applies to software-as-a-service, not
 *   just to distributing binaries.)
 *
 *   Extra WAIVER for OpenSSL, Lucre, and all other libraries
 *   used by Open Transactions: This program is released under
 *   the AGPL with the additional exemption that compiling,
 *   linking, and/or using OpenSSL is allowed. The same is true
 *   for any other open source libraries included in this
 *   project: complete waiver from the AGPL is hereby granted to
 *   compile, link, and/or use them with Open-Transactions,
 *   according to their own terms, as long as the rest of the
 *   Open-Transactions terms remain respected, with regard to
 *   the Open-Transactions code itself.
 *
 *   Lucre License:
 *   This code is also "dual-license", meaning that Ben Lau-
 *   rie's license must also be included and respected, since
 *   the code for Lucre is also included with Open Transactions.
 *   See Open-Transactions/src/otlib/lucre/LUCRE_LICENSE.txt
 *   The Laurie requirements are light, but if there is any
 *   problem with his license, simply remove the Lucre code.
 *   Although there are no other blind token algorithms in Open
 *   Transactions (yet. credlib is coming), the other functions
 *   will continue to operate.
 *   See Lucre on Github:  https://github.com/benlaurie/lucre
 *   -----------------------------------------------------
 *   You should have received a copy of the GNU Affero General
 *   Public License along with this program.  If not, see:
 *   http://www.gnu.org/licenses/
 *
 *   If you would like to use this software outside of the free
 *   software license, please contact FellowTraveler.
 *   (Unfortunately many will run anonymously and untraceably,
 *   so who could really stop them?)
 *
 *   DISCLAIMER:
 *   This program is distributed in the hope that it will be
 *   useful, but WITHOUT ANY WARRANTY; without even the implied
 *   warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *   PURPOSE.  See the GNU Affero General Public License for
 *   more details.

 -----BEGIN PGP SIGNATURE-----
 Version: GnuPG v1.4.9 (Darwin)

 iQIcBAEBAgAGBQJRSsfJAAoJEAMIAO35UbuOQT8P/RJbka8etf7wbxdHQNAY+2cC
 vDf8J3X8VI+pwMqv6wgTVy17venMZJa4I4ikXD/MRyWV1XbTG0mBXk/7AZk7Rexk
 KTvL/U1kWiez6+8XXLye+k2JNM6v7eej8xMrqEcO0ZArh/DsLoIn1y8p8qjBI7+m
 aE7lhstDiD0z8mwRRLKFLN2IH5rAFaZZUvj5ERJaoYUKdn4c+RcQVei2YOl4T0FU
 LWND3YLoH8naqJXkaOKEN4UfJINCwxhe5Ke9wyfLWLUO7NamRkWD2T7CJ0xocnD1
 sjAzlVGNgaFDRflfIF4QhBx1Ddl6wwhJfw+d08bjqblSq8aXDkmFA7HeunSFKkdn
 oIEOEgyj+veuOMRJC5pnBJ9vV+7qRdDKQWaCKotynt4sWJDGQ9kWGWm74SsNaduN
 TPMyr9kNmGsfR69Q2Zq/FLcLX/j8ESxU+HYUB4vaARw2xEOu2xwDDv6jt0j3Vqsg
 x7rWv4S/Eh18FDNDkVRChiNoOIilLYLL6c38uMf1pnItBuxP3uhgY6COm59kVaRh
 nyGTYCDYD2TK+fI9o89F1297uDCwEJ62U0Q7iTDp5QuXCoxkPfv8/kX6lS6T3y9G
 M9mqIoLbIQ1EDntFv7/t6fUTS2+46uCrdZWbQ5RjYXdrzjij02nDmJAm2BngnZvd
 kamH0Y/n11lCvo1oQxM+
 =uSzz
 -----END PGP SIGNATURE-----
 **************************************************************/

#ifndef OPENTXS_CORE_CRYPTO_OTKEYPAIR_HPP
#define OPENTXS_CORE_CRYPTO_OTKEYPAIR_HPP

#include <list>
#include <cstdint>

// A nym contains a list of master credentials, via OTCredential.
// The whole purpose of a Nym is to be an identity, which can have
// master credentials.
//
// Each credential is like a master key for the Nym's identity,
// which can issue its own subkeys.
//
// Each subkey has 3 key pairs: encryption, signing, and authentication.
// Not all subcredentials are a subkey. For example, you might have a
// subcredential that uses Google Authenticator, and thus doesn't contain
// any keys, because it uses alternate methods for its own authentication.
//
// Each OTCredential contains a "master" subkey, and a list of subcredentials
// (some of them subkeys) signed by that master.
//
// The same class (subcredential/subkey) is used because there are master
// credentials and subcredentials, so we're using inheritance for
// "subcredential"
// and "subkey" to encapsulate the credentials, so we don't have to repeat code
// across both.
// We're using a "has-a" model here, since the OTCredential "has a" master
// subkey, and also "has a" list of subcredentials, some of which are subkeys.
//
// Each subcredential must be signed by the subkey that is the master key.
// Each subkey has 3 key pairs: encryption, signing, and authentication.
//
// Each key pair has 2 OTAsymmetricKeys (public and private.)
//
// I'm thinking that the Nym should also have a key pair (for whatever is
// its current key pair, copied from its credentials.)
//
// the master should never be able to do any actions except for sign subkeys.
// the subkeys, meanwhile should only be able to do actions, and not issue
// any new keys.

namespace opentxs
{

class OTASCIIArmor;
class OTAsymmetricKey;
class Contract;
class Identifier;
class OTPassword;
class OTPasswordData;
class OTSignature;
class OTSignatureMetadata;
class String;

typedef std::list<OTAsymmetricKey*> listOfAsymmetricKeys;

// Encapsulates public/private key (though often there may only be
// a public key present, unless the nym belongs to you.)
//
class OTKeypair
{
    friend class OTLowLevelKeyData;

    OTAsymmetricKey* m_pkeyPublic;  // This nym's public key
    OTAsymmetricKey* m_pkeyPrivate; // This nym's private key

public:
    EXPORT bool MakeNewKeypair(int32_t nBits = 1024);
    EXPORT bool ReEncrypt(const OTPassword& theExportPassword, bool bImporting,
                          String& strOutput); // Used when importing/exporting
                                              // a Nym to/from the wallet.
    EXPORT bool HasPublicKey() const;
    EXPORT bool HasPrivateKey() const;
    EXPORT const OTAsymmetricKey& GetPublicKey() const;
    EXPORT const OTAsymmetricKey& GetPrivateKey() const;
    EXPORT bool CalculateID(Identifier& theOutput) const;
    EXPORT bool SaveCertToString(
        String& strOutput, const String* pstrReason = nullptr,
        const OTPassword* pImportPassword = nullptr) const;
    EXPORT bool SavePrivateKeyToString(
        String& strOutput, const String* pstrReason = nullptr,
        const OTPassword* pImportPassword = nullptr) const;
    EXPORT bool SaveCertAndPrivateKeyToString(
        String& strOutput, const String* pstrReason = nullptr,
        const OTPassword* pImportPassword = nullptr);
    // Load from local storage.
    EXPORT bool LoadPrivateKey(const String& strFoldername,
                               const String& strFilename,
                               const String* pstrReason = nullptr,
                               const OTPassword* pImportPassword = nullptr);
    EXPORT bool LoadPublicKey(const String& strFoldername,
                              const String& strFilename);
    // LoadPrivateKeyFromCertString
    //
    // "escaped" means pre-pended with "- " as in:   - -----BEGIN
    // CERTIFICATE....
    //
    EXPORT bool LoadPrivateKeyFromCertString(
        const String& strCert, bool bEscaped = true,
        const String* pstrReason = nullptr,
        const OTPassword* pImportPassword = nullptr);
    // Load Public Key from Cert (file or string)
    //
    EXPORT bool LoadPublicKeyFromCertString(
        const String& strCert, bool bEscaped = true,
        const String* pstrReason = nullptr,
        const OTPassword* pImportPassword = nullptr); // DOES handle bookends,
                                                      // AND escapes.
    EXPORT bool LoadPublicKeyFromCertFile(
        const String& strFoldername, const String& strFilename,
        const String* pstrReason = nullptr,
        const OTPassword* pImportPassword = nullptr); // DOES handle bookends.
    EXPORT bool LoadCertAndPrivateKeyFromString(
        const String& strInput, const String* pstrReason = nullptr,
        const OTPassword* pImportPassword = nullptr);
    // LOAD BOTH KEYS FROM CERT FILE
    //
    EXPORT bool LoadBothKeysFromCertFile(
        const String& strFoldername, const String& strFilename,
        const String* pstrReason = nullptr,
        const OTPassword* pImportPassword = nullptr);

    EXPORT bool SaveAndReloadBothKeysFromTempFile(
        String* pstrOutputCert = nullptr, const String* pstrReason = nullptr,
        const OTPassword* pImportPassword = nullptr);
    // PUBLIC KEY

    // * Get the public key in ASCII-armored format WITH bookends   -- OTString
    //       - ------- BEGIN PUBLIC KEY --------
    //       Notice the "- " before the rest of the bookend starts.
    EXPORT bool GetPublicKey(String& strKey, bool bEscaped = true) const;
    // (Below) Decodes a public key from ASCII armor into an actual key pointer
    // and sets that as the m_pKey on this object.
    EXPORT bool SetPublicKey(const OTASCIIArmor& strKey);
    EXPORT bool SetPublicKey(const String& strKey, bool bEscaped = false);
    // (Above) Decodes a public key from bookended key string into an actual key
    // pointer, and sets that as the m_pPublicKey on this object.
    // This is the version that will handle the bookends ( -----BEGIN PUBLIC
    // KEY-----)

    // PRIVATE KEY
    // Get the private key in ASCII-armored format with bookends
    // - ------- BEGIN ENCRYPTED PRIVATE KEY --------
    // Notice the "- " before the rest of the bookend starts.
    EXPORT bool GetPrivateKey(String& strKey, bool bEscaped = true) const;
    EXPORT bool GetPrivateKey(OTASCIIArmor& strKey) const; // Get the private
                                                           // key in
                                                           // ASCII-armored
                                                           // format
    // Decodes a private key from ASCII armor into an actual key pointer
    // and sets that as the m_pPrivateKey on this object.
    // This is the version that will handle the bookends ( -----BEGIN ENCRYPTED
    // PRIVATE KEY-----)
    EXPORT bool SetPrivateKey(const String& strKey, bool bEscaped = false);
    EXPORT bool SetPrivateKey(const OTASCIIArmor& strKey); // Decodes a private
                                                           // key from ASCII
                                                           // armor into an
                                                           // actual key pointer
                                                           // and sets that as
                                                           // the m_pKey on this
                                                           // object.
    // Only works if a private key is present.
    //
    EXPORT bool SignContract(Contract& theContract,
                             const OTPasswordData* pPWData = nullptr);
    EXPORT void SetMetadata(const OTSignatureMetadata& theMetadata);
    EXPORT int32_t GetPublicKeyBySignature(
        listOfAsymmetricKeys& listOutput, // inclusive means, return keys when
                                          // theSignature has no metadata.
        const OTSignature& theSignature, bool bInclusive = false) const;
    EXPORT OTKeypair();
    EXPORT ~OTKeypair();
};

} // namespace opentxs

#endif // OPENTXS_CORE_CRYPTO_OTKEYPAIR_HPP
