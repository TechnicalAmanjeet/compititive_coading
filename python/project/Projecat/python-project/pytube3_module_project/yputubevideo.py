# import youtube from pytube3 library module

from pytube import YouTube

# taking link from user
videolink=input("enter the link of video : ")

# To know the title of above entered video
print(videolink.title)

#to take thumbnail of that video
#print(videolink.thumbnail_url)

#first stream video
#print(videolink.streams.first())

#list of all streams of youtube video
strems=videolink.streams.all()

#printing on screen all possible strems
for i in range(len(strems)):
  print(i+". "+strems[i])

# pick and enter on which stream do you want to download video
choice=input("Enter your choice : ")

#download youtube video in user choice strems in this working directory
strems[choice-1].download()

# download in any specific directory
#strems[choice-1].download('C:\Users\Acer\Desktop')