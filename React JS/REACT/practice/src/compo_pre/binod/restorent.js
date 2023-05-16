import React, { useState } from 'react';
import './style.css';
import Menu from './menuapi';
import Menucard from './Menucard'
const uniqlist = [... new Set(Menu.map((curele)=>{
  return curele.category;
}))]
const Resturent = () => {
  const [menudata,setMenuData]= useState(Menu)
  console.log(menudata);
  const filteritem = (category) => {
    const updetedlist = Menu.filter((curele)=> {
      return curele.category===category;

    });
    setMenuData(updetedlist)
  }; 
  return (
   <>
   <nav className='navbar'>
   <div className='btn-group'>
    <button className='btn-group__item' onClick={() => filteritem('breakfast')}>breakfast</button>
    <button className='btn-group__item' onClick={() => filteritem('lunch')}>lunch</button>
    <button className='btn-group__item' onClick={() => filteritem('evening')}>evening</button>
    <button className='btn-group__item' onClick={() => filteritem('dinner')}>dinner</button>
    <button className='btn-group__item' onClick={() => setMenuData(Menu)}>all</button>

   </div>

   </nav>
   <Menucard menudata={menudata}/>
   </>
  );
}

export default Resturent;
