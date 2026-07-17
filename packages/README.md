# Offline dependency archives

GitHub limits ordinary Git objects to 100 MB, so the Boost archive is stored in two parts. Reassemble and verify it before building:

```bash
cat packages/boost_1_82_0.tar.gz.part-* > packages/boost_1_82_0.tar.gz
sha256sum packages/boost_1_82_0.tar.gz packages/gflags-2.2.2.tar.gz
```

Expected SHA-256 checksums:

```text
66a469b6e608a51f8347236f4912e27dc5c60c60d7d53ae9bfe4683316c6f04c  packages/boost_1_82_0.tar.gz
34af2f15cf7367513b352bdcd2493ab14ce43692d2dcd9dfc499492966c64dcf  packages/gflags-2.2.2.tar.gz
```
