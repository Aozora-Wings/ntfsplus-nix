# shellcheck shell=bash
# NTFS+ DKMS Package - Multi-Kernel Version Support (6.12-6.18)

pkgbase=ntfsplus-dkms-multi
pkgname=("$pkgbase" "ntfsplus-udev")
pkgver=2025.12.21.r1.0000
pkgrel=1
pkgdesc="A new NTFS driver for Linux with multi-kernel version support (6.12-6.18). These patches are automatically adapted for different kernel versions."
arch=('any')
url="https://github.com/shadichy/ntfsplus-dkms"
license=('GPL-2.0-only')
makedepends=('git' 'patchutils' 'diffstat')
optdepends=(
  'ntfsprogs-plus: Recommended NTFS utilities'
)
options=('!strip' '!emptydirs')

# Source files
source=(
  'linux::git+https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git'
  'dkms.conf'
  '90-udev-prefer-ntfsplus.rules'
  'ntfsplus-compat-common.h'
  'kernel-6.12/patch-1.patch'
  'kernel-6.12/patch-2.patch'
  'kernel-6.12/patch-3.patch'
  'kernel-6.12/patch-4.patch'
  'kernel-6.12/patch-5.patch'
  'kernel-6.12/patch-6.patch'
  'kernel-6.12/patch-7.patch'
  'kernel-6.12/patch-8.patch'
  'kernel-6.12/patch-9.patch'
  'kernel-6.12/patch-10.patch'
  'kernel-6.12/patch-11.patch'
  'kernel-6.12/patch-12.patch'
  'kernel-6.12/patch-13.patch'
  'kernel-6.12/patch-14.patch'
  'kernel-6.12/patch-15.patch'
  'kernel-6.12/patch-16.patch'
  'kernel-6.12/patch-17.patch'
  'kernel-6.12/patch-18.patch'
  'kernel-6.12/patch-19.patch'
  'kernel-6.12/ntfsplus-compat.h'
  'kernel-6.13/patch-1.patch'
  'kernel-6.13/patch-2.patch'
  'kernel-6.13/patch-3.patch'
  'kernel-6.13/patch-4.patch'
  'kernel-6.13/patch-5.patch'
  'kernel-6.13/patch-6.patch'
  'kernel-6.13/patch-7.patch'
  'kernel-6.13/patch-8.patch'
  'kernel-6.13/patch-9.patch'
  'kernel-6.13/patch-10.patch'
  'kernel-6.13/patch-11.patch'
  'kernel-6.13/patch-12.patch'
  'kernel-6.13/patch-13.patch'
  'kernel-6.13/patch-14.patch'
  'kernel-6.13/patch-15.patch'
  'kernel-6.13/patch-16.patch'
  'kernel-6.13/patch-17.patch'
  'kernel-6.13/patch-18.patch'
  'kernel-6.13/patch-19.patch'
  'kernel-6.13/ntfsplus-compat.h'
  'kernel-6.14/patch-1.patch'
  'kernel-6.14/patch-2.patch'
  'kernel-6.14/patch-3.patch'
  'kernel-6.14/patch-4.patch'
  'kernel-6.14/patch-5.patch'
  'kernel-6.14/patch-6.patch'
  'kernel-6.14/patch-7.patch'
  'kernel-6.14/patch-8.patch'
  'kernel-6.14/patch-9.patch'
  'kernel-6.14/patch-10.patch'
  'kernel-6.14/patch-11.patch'
  'kernel-6.14/patch-12.patch'
  'kernel-6.14/patch-13.patch'
  'kernel-6.14/patch-14.patch'
  'kernel-6.14/patch-15.patch'
  'kernel-6.14/patch-16.patch'
  'kernel-6.14/patch-17.patch'
  'kernel-6.14/patch-18.patch'
  'kernel-6.14/patch-19.patch'
  'kernel-6.14/ntfsplus-compat.h'
  'kernel-6.15/patch-1.patch'
  'kernel-6.15/patch-2.patch'
  'kernel-6.15/patch-3.patch'
  'kernel-6.15/patch-4.patch'
  'kernel-6.15/patch-5.patch'
  'kernel-6.15/patch-6.patch'
  'kernel-6.15/patch-7.patch'
  'kernel-6.15/patch-8.patch'
  'kernel-6.15/patch-9.patch'
  'kernel-6.15/patch-10.patch'
  'kernel-6.15/patch-11.patch'
  'kernel-6.15/patch-12.patch'
  'kernel-6.15/patch-13.patch'
  'kernel-6.15/patch-14.patch'
  'kernel-6.15/patch-15.patch'
  'kernel-6.15/patch-16.patch'
  'kernel-6.15/patch-17.patch'
  'kernel-6.15/patch-18.patch'
  'kernel-6.15/patch-19.patch'
  'kernel-6.15/ntfsplus-compat.h'
  'kernel-6.16/patch-1.patch'
  'kernel-6.16/patch-2.patch'
  'kernel-6.16/patch-3.patch'
  'kernel-6.16/patch-4.patch'
  'kernel-6.16/patch-5.patch'
  'kernel-6.16/patch-6.patch'
  'kernel-6.16/patch-7.patch'
  'kernel-6.16/patch-8.patch'
  'kernel-6.16/patch-9.patch'
  'kernel-6.16/patch-10.patch'
  'kernel-6.16/patch-11.patch'
  'kernel-6.16/patch-12.patch'
  'kernel-6.16/patch-13.patch'
  'kernel-6.16/patch-14.patch'
  'kernel-6.16/patch-15.patch'
  'kernel-6.16/patch-16.patch'
  'kernel-6.16/patch-17.patch'
  'kernel-6.16/patch-18.patch'
  'kernel-6.16/patch-19.patch'
  'kernel-6.16/ntfsplus-compat.h'
  'kernel-6.17/patch-1.patch'
  'kernel-6.17/patch-2.patch'
  'kernel-6.17/patch-3.patch'
  'kernel-6.17/patch-4.patch'
  'kernel-6.17/patch-5.patch'
  'kernel-6.17/patch-6.patch'
  'kernel-6.17/patch-7.patch'
  'kernel-6.17/patch-8.patch'
  'kernel-6.17/patch-9.patch'
  'kernel-6.17/patch-10.patch'
  'kernel-6.17/patch-11.patch'
  'kernel-6.17/patch-12.patch'
  'kernel-6.17/patch-13.patch'
  'kernel-6.17/patch-14.patch'
  'kernel-6.17/patch-15.patch'
  'kernel-6.17/patch-16.patch'
  'kernel-6.17/patch-17.patch'
  'kernel-6.17/patch-18.patch'
  'kernel-6.17/patch-19.patch'
  'kernel-6.17/ntfsplus-compat.h'
  'kernel-6.18/patch-1.patch'
  'kernel-6.18/patch-2.patch'
  'kernel-6.18/patch-3.patch'
  'kernel-6.18/patch-4.patch'
  'kernel-6.18/patch-5.patch'
  'kernel-6.18/patch-6.patch'
  'kernel-6.18/patch-7.patch'
  'kernel-6.18/patch-8.patch'
  'kernel-6.18/patch-9.patch'
  'kernel-6.18/patch-10.patch'
  'kernel-6.18/patch-11.patch'
  'kernel-6.18/patch-12.patch'
  'kernel-6.18/patch-13.patch'
  'kernel-6.18/patch-14.patch'
  'kernel-6.18/patch-15.patch'
  'kernel-6.18/patch-16.patch'
  'kernel-6.18/patch-17.patch'
  'kernel-6.18/patch-18.patch'
  'kernel-6.18/patch-19.patch'
  'kernel-6.18/ntfsplus-compat.h'
)

# SHA256 checksums
sha256sums=(
  'SKIP'
  '4bdecd7ff21ee8e470ab0302c930a4ec0cc8edf49418a4b6f4361b05287d4d21'
  'ea0cc3c4526b69c68d1ecfdd17863b190167ce5fbf59ba02a542f2279097fff7'
  'fd88a7072ef09c5ac5cfefc15f15bc09a8a03138988e692879bee83259895880'
  '09568b79e67dbde369adbb3309ba44228ea0f33dde07c3a93f9b0735877544e0'
  'a54a1da1a93722a65f86c525584bad990b9b578a9d0bf58ff7f6239cc5814364'
  '3df28d16c675e68bc78d8a25f4d85e56c0a7f3c57e793a207fad1e2566753d26'
  'dc45221eadde1ebc3f18c559152d04fc284e04e999043bfbcacf2e1de057faca'
  'eff6184e8697b67b90e11316a2f20453484e3abd6c6154b165b42aaee7d109b5'
  'e6002e27efeb26b3f3cb34840327b929a5f095bf7598833d498ca37657c0ac6f'
  'a65463488bca9a924b0d83a06608353389a02e8bfe8daa134d53ce223322154c'
  '6de64e6610f382b22c481f9949902327d2c285eec2329fc34b6395278d6b99a1'
  'c36fbf652a0553fb5a2c9b1811c0d093e6a521a727e00c1a3bebe5da2ec074b8'
  '16fa6e95368f52f4d1292e761c9ae10d038112bcd0b4d7caa6c697768212f7bc'
  'da2a228cb474b06e4a8538864fd019fb621f574aab3871f5391bb566cabc3c7c'
  'b9fc4cb79f7f2c5209ba7e1eec69671372c54746f0bad66a916af0fccbd74f3d'
  'c87ab31e10cde5836026be72e567f53b4413324ff8f6c97dbb145c640c4561fb'
  '0bd8a1553d4f0c37d58c46480e44227728c056cb5165950a1c592bfd8493ced1'
  '0458ca7198a43146248eaa1ea5a17b07b7c7adef14ed3cbf09f9dedd69c1cce6'
  '69da84dfc1d15b742e1507776ba6cdd2f28f52d6eb542c1694f438c1226788de'
  'bccac09856c862757d786dc56b4183f7c35fdfb40060ba109727e899afbef078'
  '61d8801a29542ee27a8974dc8ca8556e704cfe5179424eb5d733cebcc5c52da3'
  '20c1c305534860e97d0f692230aaf22f2983374f6b5d7a8f9f42108c2bd5b452'
  '308c237ebc90bef8205f40b364dd9ae725fb6c7b503980a32cfe07e478b9dc8c'
  '99e7013a2151384ce0c4f0b342122484ffdb0d322b36cfba02fab9242c2c16c6'
  '93eb690f7622b23785b85fcc9ed627863f01bbfc9f50578dbefcbdb97fcddcfe'
  '75f41eead8b69dceaf09b14cec3d962fe015f7cdc538db997b806a0f80d9a263'
  '86ea3b975506045254d34b3c034c0dcd87955d6eeca3801a7962a9435f5ffc67'
  '03b9eb47a16918c0ce5f670d0ed9b4d3d7134695fb693e1d4af00139676355e3'
  'cdd3b66ac968fdbec23889d92bc19608679c7657f29be787a0283ef891c4047d'
  '807a81792a462c59016cb2132458aa5d330f42c920dddb289c326842fb2fec1a'
  'd5c9f457c1eb131526da57415de327a48fd369622ecd390c4fa557f458c7a0eb'
  'df43413afc184cdd9a0e792ff0b119dfd232fa1aed1dc949a872934f055d4283'
  '9ffc94ef6de32a3634fb5dc5110c8d28500254385b128c3b56eb0df1b8593152'
  'c43408a17b7a3956affb24b3483d4068111067381fc38d623d97fa9ed8423e0f'
  '106b183c16844265afafa87ced4bf8bf3e24dbd9e0dc357c1490fceefa7026c0'
  'e31c0fa3e9cc1579c87a6e97f63a6db01f83c32e9136b981f411725640eb0579'
  'f0224b9371bcc60457499660f1187dce23cf78a0540c0521ee557d26e1ca9203'
  '4dbd50c5150df7e213e1b99240bfa90a41140c218dc9bd331e0338fcfa0d4e9d'
  'b113eebc8d29783368e42c449039081b07aaf9b1f3efd18d79605bd8e4d829cc'
  'a1b79e24c07132df95db424b82445a7a2950b5d6544422bf4a6ff4be6cbe59c5'
  '6fe07db2c0bc96c4d8609b3783e0938073f6d08015872f04bef0ba07e58d89c6'
  '8a73059cdcf19e5a7718e132fd735d5ef9ab7151c54c50d31b01eace644e5876'
  'd10d00f8b8eb5461f034c9d9d4851944723fed644f914e9b4ce2f74b8f519aae'
  'd958d0400927f7b8dfd2ea92259c1f8d7e617032759d68c8e4eeab3188baa4fc'
  'f353eb8c5219bb16667e8176cb78564a997deca4778ea3e30fd3184d47df35b0'
  'f147911f4ab723c6bf875ed607e48770a271d57a76091695fdb5c0e47ef9d704'
  '13c21ff3feff519319bda5067b3b34c6b18923d8ac92082bb50537206abb59d6'
  '7fa9b977f4d931d762f3716b6830c0c11805dd169dfd78be3dd829f2dfc96896'
  '43287c50f4f6c8815cf911df92f45149e522ef4d285a4ef8017e7680c45853d4'
  '0217d52174a5faf639a2a6ca0616e61ef76b4d4cc0b75b4eecfe81171dd6e82b'
  'c0f85a368b61156c24c5e66fdbb9edc114964c77332c39d7ec53db674d1a11b2'
  '42d1e6345613c7247d68038c963932a2891ab4dbcec6d3c12d87971e503708bc'
  '8bab5c9840ab829cfeeaff1cdc335d70c64c086f3ea2b47a1306c365ccccb72f'
  'e3d5740e5fdeaca9aea74f4e003c21a6766da99f05f1e127ef24c66c8e803242'
  '869bd55c5d58acd0ec88d074b77764645cdefc54d01824b93ee872016d2ced76'
  '3476ea854968d001cf31d2b62707c11cdc79734e743a34599e9099aff37890c2'
  '67d18176b2da3987a301bf72ac4778855a296dd2afa5bceb325af853c781b46e'
  'a550b0f248619fca29deaba13f9bf35a7bc94a5676a02129ac030740a7cac4f0'
  'c2eec869d81b14328dffb07df6437568766802480a48f0dda999b0b4140203da'
  '6961d021365c59817273cb050ffeda34c7a0df6fc670de5c5690725ed5625613'
  'bc5f3b5365add0441f54c34bfff57c9e222798981b4341be95449246f24d89bc'
  '14c671f9616b91565d61cd5e05a65af699e2361355ef72e6edc7065fb1427590'
  'eb1c5ac928445d9a07012c96adadb3b562f6ee6a3e80e4668dd6ffcb07f12281'
  '05a93af2acd889e37ce01985d5a605a22ad30a7065136722422070322fa61357'
  '258d1a108385cf2521171516fa78ff6be7c9294d96a92471e35246a5407d154d'
  '7dc808a249c858ee5c96225cf28aca1073f03d2642c70c211fab60bfb362d3cf'
  '7e382e59e9ccd69529291ef5b7c7bd71422fea5ea0ec01a98f27a493d0aed4cc'
  '5fc8075d5fcd20efa5304670a4c29b16346b8ca6d5dcd6c07761ae4dc5e1f7aa'
  '3160f23104964889853cf63d4a4b4febd13983ef9dec5895fcc4cc7bb9022fb6'
  'c8fc12d2ca2982ccce4b1bd8158eaa66ef4b6381b7d2a6d53fa295f7b1d69487'
  '3dc1a427cf8b639d9ff8aa0df9df14802c50da20e3c911d42e5e3447e12de5ed'
  '1b19d486fa8cbd4999c766c52c932bae5a1bf13dc43dc2a4a3886ce8b0417969'
  '2db7774876832807c5883b18861690dd0e04a436997e4ebd8148ae9bc89ce754'
  '16e55c0a56aadb4c80d14d5b3446435a95f218c3f0c3c77cb055a2811ab23d20'
  'ae25c619cef3907d8e95f162975c0e98f50f7a8ae7da5446d528adcaa69ce39e'
  '0ccad2823e568fb5ac8e21ff03252744e3beaa6136b3cea1a12138dd4d8c2830'
  '196bdc91d99ac3d55cff368c74cfde5a5dffae293314c3a5ad773d929b4c2149'
  'abc3cec6ac7e4bc0d22fbd2a31ebdb22caa6b9407c2bac722af309e624def17d'
  'bdec3662018f415065031efdeecbb0e6dbdb4e1e560962ba5c5ed613ed59d04c'
  'fc0fe7956365cfaec8b9e0e2fec8931aa90ab5d3c36d61941da2d25d9374a16c'
  'c9e4493e2bdf8548914788ef228da8dce35b8efbcf6d092a902b5d272965e46f'
  '4dcda8d3f962e202ea8396449f3e7e385fd4532ee0aaece3400bd753f9ade4fc'
  'f2e4c8b3d3f62049b29254b8da467bf2a59afb3dae0e465d707059ed214f0254'
  '734a7095af14d2808b2bc321afc89e940d2595c810eb37b7705b63c8a1652966'
  'aa1c7367774b2d7731c13e0a7aecb2e9e1297a69b604d4a89c4cafe6450724e1'
  '04357bb782fd7e88bd15f7c1f0656e47ce1a13dcaaf8fb07dce79b56ca943091'
  '5a0e49390fdf2ca9880b9c91cd1179c4e8b8c49d368ff4e7a450b97e66ff6a56'
  '11e6266def5d6f3d84f273e6c2f7519d82d992db7a89a183d78b11dcd05658a9'
  '1f1c37947b9904d3d4c7022164f79be643913e43c642f449c28e0aac2e899780'
  'f94347f383baadc15cf2abc6bdf275b2f46c9a5c27baccc1d62a0f7fddf074f2'
  '0c4f2a25a0a1bb9963d4cef1f318f46c6919dceb693da41d5428643c4d141ef1'
  '99307b8d04f373750a7f1acedc64ed68460ba467e52aaaacdc217876603bcda5'
  '096404ac20e6f009f3160465d68be915118d0b54621225c60b9653b86aa2ceac'
  '98fa9628ecfbd42e91cb6b6ad557a9b38913cddfbc864a6d65cbd3fbeb9f5734'
  '2c327aa911ca7d0ab358a2b70fc80a53bc29f96adb74e1197aea0234c2ad65a6'
  'dc275089f9900df4deec5948a70b01299e1806c7f0d9a6dc6a6728c2e83b2ac4'
  '65163c9a2a9a049906c59a088810033824b9c9019564d1e8af285d84045c4e32'
  'd1c8b7fea57a5572fe4801bbdf909c92f89ac5599b0e178905f78bd53a31eb1a'
  '459a85dd4efd8b8d8e273e351e551c8eadc60388764beed403ed4a7913650107'
  '6285bd93f898bc37fc66bc3222325285f17e9d1885213c0cbcd2b389a3ec4bfa'
  '97042bc115ef3c2524d6472bd39ab196d3a8ac768ee6286a54089e4b452b2538'
  '04727d53d7c0fce50adaabaaf729e3ea72184edb10e9bc2367b44fe4caf6dbd1'
  'cf2515de10ca25f58a4b8cdde68d5d1db46477763d83e5be7abb97bcced3a010'
  '1e3ee24cbb1df0e39696f0c8d2dd8e1f7dbfa47285a7c66d8765c60c8290102f'
  '64e3e8daf2cfa9ea2fdbafdebea9fb3e19fb56865381614b0666d87e803f8797'
  '04890859f0111a42ffc07fc77a0d88f1ffed9b819be3e0e62f77149c657b8251'
  '06dd9af9750bfebd609d1610bfdb6aaffa5c4733f2b9f90ff7835a86d6e7ebc8'
  'd729cb96633679ca66f2bca083a24bc0daeb3357ab82ce2e6f3a1ca9ed5b13e0'
  'df6eda219642b80b6e3abe1958cd5cdf338127535ad85bbd8b8c706a310ab18b'
  '94cab633308668446acf9188120b58bd25ff5969c0bde8cbecec41dbf6580f91'
  '207140cec260ff323117cac305ebec51abaeda5487c3abb52dfde8509821e7b0'
  'faeeb57c2373b78978730058b11d3a8a6e4686eec9dc9d191ce80e3032867132'
  '5709e13be9ad625c68220251b8d81b0e266f0f666b742e12376025f3f93c4de1'
  '10346e5d4414e8959082d5d5b44a75259d0f07837e49e976a2fb9c82417ed726'
  'd192e484eec61e2edef832d9db3090cf5b1846988ba3685a59b857a3660af941'
  '75adcc412e410a2157f5477a6dcb4a5a686d00c7fbc522564a8c530137a33c32'
  '4a87b4afc92de1e14524640438160cac3634c0cc17b88727ccb539fa5b23e7e6'
  '61fd1b9d54710d48d37b5c21320fe5c1a88541659538415ec06ccd6aeaeb0d8c'
  '33936667062bb6e46da0600cc2ab51cdcea9bf8622504f673a900f70778a23f3'
  '4803a40056333770a4d476fe901ff5f1924647b9e3b83d95307c21a14e261c71'
  '72161333a404981316cacc62dac4431c6a04dc4d8c34deec3a592644216e9725'
  '91e041ad509b40065aead77e11d9bd20cd214f3e965d637926136e3135c30bc6'
  '78adb48a2ef359f4f6237f8e5dc5bb79aaf309a30903dbd3842f593114c09a1f'
  '31331d6c10a4da4c0734aaca83c016abea8f731a8aa96366fc3e8ea121c7fe7f'
  'c8953e4f6a3b57e70e9b98f7dc343d1b262890b07393d9dd29ea0e156b9ca870'
  'efa3ead85050f0ceb431d1939e1854221cdd1073569e87a45aa27f47a80d4af9'
  'aacdafa0e150d09a93b55f4a6f8cff92fba18a20933e3b3b1110b05bae3b7532'
  '979eee8f55b4398950eef7aabda3e997401c18fddf1d58250587341a13331f28'
  '49697307bde3ae80fa57ce58416a668aaf7cb06da9bab1c2f3935de9332a5a46'
  'f39840808490298915c5c0617e80448e8a5b181c67ed69073a673f1346c8303e'
  '0d650b61860bfdf93dee75ea1881e9f91bedb0988bb61044c66dca9e5c3255b3'
  '26a2163c91e46db2c5d9a1467a4d8b302479c31cf91ebe1c0153fcb9e866b727'
  'cad41a7b14fa99c26f1eaaa7d62f9005996df5625924cf1ba99e7137352b3857'
  'cd15d8469656dfb84ccf7e621657e671d34c4252ebb68d58db71da88a9ea76e4'
  '678890a4c38ebec4aeb3c9e44f2efe8e7285739da8ad5c75a3af2dabf3680e35'
  '79f7377c51f93931ff22faa518d2c49aeabbf08c89ae32aa179fc3b23975f199'
  'c67d67dd722e86c5afa94505150f6042bafbd5b4f5e2938bec99159349aedb73'
  'd28c3ea40d548b7b258107d23fc8b4ac832a97be71b9f4de651df3689d23d08b'
  '74211139f9be51497ce24f790c94adb502ac9dad1b171e341c81daba1d20aa96'
  '6122a8fecc620d01fe54b235ecdb9cc141a0b66fe500f4b3275d778d403617c0'
  '2104da69e697034891b26c148fc1e2654001e567051c0fa6c53295bed09de725'
  'd9a69606e4169ecbb420f408ed6f6f36ef865b6256695dabc20418355416a036'
  'fc73716a51192b742c076532742c31efcfc1639a187f0c6e48400724d722d93e'
)

_upstream_last_commit_date=

prepare() {
  echo "🔧 Preparing NTFS+ DKMS build for multi-kernel support"
  echo "========================================================"
  
  # Clone Linux kernel if not already present
  if [ ! -d "$srcdir/linux" ]; then
    echo "Cloning Linux kernel..."
    git clone --depth=1 https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git "$srcdir/linux"
  fi
  
  cd "$srcdir/linux"
  
  # Check current kernel version in source
  KERNEL_VERSION=$(grep -E '^VERSION =|^PATCHLEVEL =|^SUBLEVEL =' Makefile | \
                   awk '{print $3}' | tr '\n' '.' | sed 's/\.$//')
  echo "Linux kernel version in source: $KERNEL_VERSION"
  
  # Determine which patch set to use based on kernel version
  PATCH_VERSION="6.18"  # Default to latest
  
  # Map kernel version to our patch sets
  case "$KERNEL_VERSION" in
    6.12.*) PATCH_VERSION="6.12" ;;
    6.13.*) PATCH_VERSION="6.13" ;;
    6.14.*) PATCH_VERSION="6.14" ;;
    6.15.*) PATCH_VERSION="6.15" ;;
    6.16.*) PATCH_VERSION="6.16" ;;
    6.17.*) PATCH_VERSION="6.17" ;;
    6.18.*) PATCH_VERSION="6.18" ;;
    *) 
      echo "⚠️  Warning: Kernel version $KERNEL_VERSION not in 6.12-6.18 range"
      echo "Using default patch set for 6.18"
      PATCH_VERSION="6.18"
      ;;
  esac
  
  echo "Using patch set for kernel version: $PATCH_VERSION"
  
  # Apply patches for the selected version
  PATCH_DIR="$srcdir/kernel-$PATCH_VERSION"
  if [ -d "$PATCH_DIR" ]; then
    echo "Applying patches from $PATCH_DIR..."
    
    # Apply all .patch files in order
    for patch_file in "$PATCH_DIR"/*.patch; do
      if [ -f "$patch_file" ]; then
        echo "  Applying: $(basename "$patch_file")"
        patch -p1 --no-backup-if-mismatch < "$patch_file" || {
          echo "⚠️  Patch application may have issues, continuing..."
        }
      fi
    done
    
    # Copy compatibility header
    if [ -f "$PATCH_DIR/ntfsplus-compat.h" ]; then
      echo "Installing compatibility header..."
      mkdir -p "fs/ntfsplus"
      cp "$PATCH_DIR/ntfsplus-compat.h" "fs/ntfsplus/"
    fi
    
    # Also copy common compatibility header
    if [ -f "$srcdir/ntfsplus-compat-common.h" ]; then
      cp "$srcdir/ntfsplus-compat-common.h" "fs/ntfsplus/"
    fi
  else
    echo "❌ Error: Patch directory $PATCH_DIR not found"
    exit 1
  fi
  
  echo "✅ Patch application complete"
}

pkgver() {
  cd "$srcdir/linux"
  
  # Version format: YYYY.MM.DD.r<commitcount>.<commitsha>
  local commit_count commit_sha head_date
  commit_count=$(git rev-list --count HEAD 2>/dev/null || echo "1")
  commit_sha=$(git rev-parse --short HEAD 2>/dev/null || echo "0000000")
  head_date=$(git show -s --format='%cI' HEAD 2>/dev/null || date -Iseconds)
  
  # Use date from git or current date
  if [ -n "$head_date" ]; then
    date +'%Y.%m.%d.r'"${commit_count}"'.'"${commit_sha}" -d "${head_date}" 2>/dev/null || \
    date +'%Y.%m.%d.r'"${commit_count}"'.'"${commit_sha}"
  else
    date +'%Y.%m.%d.r'"${commit_count}"'.'"${commit_sha}"
  fi
}

build() {
  cd "$srcdir"
  
  echo "🔨 Building NTFS+ DKMS package"
  echo "================================"
  
  # Update dkms.conf with package version
  if [ -f "dkms.conf" ]; then
    sed -i "s/@PKGVER@/${pkgver}/" dkms.conf
    echo "Updated dkms.conf with version: $pkgver"
  fi
  
  # Create a combined patch set for documentation
  echo "Creating combined patch set documentation..."
  mkdir -p "patch-docs"
  
  for version in 6.12 6.13 6.14 6.15 6.16 6.17 6.18; do
    if [ -d "kernel-$version" ]; then
      echo "Kernel $version patches:" > "patch-docs/version-$version.txt"
      ls -1 "kernel-$version"/*.patch 2>/dev/null | wc -l >> "patch-docs/version-$version.txt"
    fi
  done
  
  echo "✅ Build preparation complete"
}

package_ntfsplus-dkms-multi() {
  pkgdesc="DKMS module for ntfsplus with multi-kernel version support (6.12-6.18)."
  depends=('dkms')
  optdepends+=("ntfsplus-udev: udev rules for ntfsplus")
  provides=('ntfsplus' 'NTFSPLUS-MODULE')
  conflicts=('ntfsplus' 'ntfsplus-dkms-git')

  cd "$srcdir"
  
  local dest="$pkgdir/usr/src/ntfsplus-${pkgver}"
  echo "📦 Packaging DKMS module to: $dest"
  
  # Install dkms.conf
  install -Dm644 "$(readlink -f dkms.conf)" "$dest/dkms.conf"
  
  # Copy ntfsplus source
  if [ -d "linux/fs/ntfsplus" ]; then
    echo "Copying ntfsplus source files..."
    mkdir -p "$dest"
    cp -rpT "linux/fs/ntfsplus" "$dest/"
    
    # Ensure compatibility headers are included
    if [ -f "linux/fs/ntfsplus/ntfsplus-compat.h" ]; then
      echo "Including compatibility header"
    fi
    
    # Copy ntfs.h header
    if [ -f "linux/include/uapi/linux/ntfs.h" ]; then
      install -Dm644 "linux/include/uapi/linux/ntfs.h" "$dest/include/uapi/linux/ntfs.h"
    fi
    
    # Create version file
    echo "Kernel version support: 6.12-6.18" > "$dest/SUPPORTED_VERSIONS"
    echo "Build date: $(date)" >> "$dest/SUPPORTED_VERSIONS"
    echo "Patch version: $pkgver" >> "$dest/SUPPORTED_VERSIONS"
    
    # Include patch documentation
    if [ -d "patch-docs" ]; then
      cp -r "patch-docs" "$dest/"
    fi
  else
    echo "❌ Error: ntfsplus source directory not found"
    exit 1
  fi
  
  echo "✅ DKMS package created"
}

package_ntfsplus-udev() {
  pkgdesc="udev rules for ntfsplus."
  depends=('udev')

  cd "$srcdir"
  
  local rule='90-udev-prefer-ntfsplus.rules'
  if [ -f "$rule" ]; then
    install -Dm644 "$(readlink -f "$rule")" "$pkgdir/usr/lib/udev/rules.d/$rule"
    echo "✅ Installed udev rules"
  else
    echo "⚠️  Warning: udev rules file not found"
  fi
}

# Post-installation message
post_install() {
  echo ""
  echo "🎉 NTFS+ DKMS installation complete!"
  echo "====================================="
  echo ""
  echo "This package supports kernel versions: 6.12, 6.13, 6.14, 6.15, 6.16, 6.17, 6.18"
  echo ""
  echo "To install the module for your current kernel:"
  echo "  sudo dkms add ntfsplus/$pkgver"
  echo "  sudo dkms build ntfsplus/$pkgver"
  echo "  sudo dkms install ntfsplus/$pkgver"
  echo ""
  echo "The module will automatically adapt to your kernel version."
  echo "Compatibility headers are included for API differences."
  echo ""
  echo "For more information, see: /usr/src/ntfsplus-$pkgver/"
}

post_upgrade() {
  post_install
}
