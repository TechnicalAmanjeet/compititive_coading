from pytube import YouTube

yt = YouTube('https://youtu.be/5Lyh1oeFA7w')

print("title : "+ yt.title)

# yt.thumbnail_url


stream = yt.streams.first()
print(stream)

stream=yt.streams.all()
for i in stream:
  print(i)



#stream.download()